#include <bits/stdc++.h>
using namespace std;

void generateLuckyNumber(int current, int limit, vector<long long>& luckyNumber) {
    if (current > limit) return;
    if (current > 0) luckyNumber.push_back(current);

    generateLuckyNumber(current * 10 + 4, limit, luckyNumber);
    generateLuckyNumber(current * 10 + 7, limit, luckyNumber);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<long long> luckyNumber;
    generateLuckyNumber(0, 1000, luckyNumber);

    bool flag = 0;
    for (int x : luckyNumber) {
        if (n % x == 0) {
            cout << "YES";
            flag = 1;
            break;
        }
    }

    if (flag == 0) cout << "NO";
    return 0;
}