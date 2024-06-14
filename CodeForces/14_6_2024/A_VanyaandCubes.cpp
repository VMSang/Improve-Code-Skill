#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int count = 0;
    int pre = 0;
    int i = 1;
    while (n >= pre + i) {
        count++;
        n -= pre + i;
        pre += i;
        i++;
    }
    cout << count << "\n";
    return 0;
}
