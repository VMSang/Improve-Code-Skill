#include <iostream>
typedef long long ll;

int main() {
    ll t; 
    std::cin >> t;
    while (t--) {
        ll n; 
        std::cin >> n;
        ll cnt = 0;
        for (ll digit = 1; digit <= 9; digit++) {
            ll cur = digit;
            for (ll rep = 1; rep <= 10; rep++) {
                if (cur <= n) {
                    ++cnt;
                } else {
                    break;
                }
                cur = 10 * cur + digit;
            }
        }
        std::cout << cnt << std::endl;
    }
    return 0;
}
