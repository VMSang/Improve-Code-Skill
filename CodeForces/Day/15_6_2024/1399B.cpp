#include <iostream>
#include <vector>
typedef long long ll;

int main() {
    ll t; 
    std::cin >> t;
    while(t--) {
        ll n; 
        std::cin >> n;
        ll mina = 1e9 + 7, minb = 1e9 + 7;
        std::vector<ll> a(n); 
        for(ll p = 0; p < n; p++) {
            std::cin >> a[p]; 
            mina = (mina < a[p]) ? mina : a[p];
        }
        std::vector<ll> b(n); 
        for(ll p = 0; p < n; p++) {
            std::cin >> b[p]; 
            minb = (minb < b[p]) ? minb : b[p];
        }

        ll cnt = 0;
        for(ll p = 0; p < n; p++) {
            ll x = a[p] - mina;
            ll y = b[p] - minb;
            cnt += (x > y) ? x : y;
        }

        std::cout << cnt << std::endl;
    }

    return 0;
}
