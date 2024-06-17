#include <iostream>
using namespace std;

int main() {
    long n, m, k;
    cin >> n >> m >> k;
    cout << (n <= m && n <= k ? "Yes" : "No") << endl;
    return 0;
}
