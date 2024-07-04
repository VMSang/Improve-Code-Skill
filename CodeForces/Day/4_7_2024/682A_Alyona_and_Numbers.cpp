#include<iostream>

#define DBG(x) std::cout << #x << ": " << x << std::endl;
#define DBG_FOR(vec) std::cout << #vec << ":" << std::endl; for (auto x: vec) std::cout << x << " "; std::cout << std::endl;
typedef long long ll;

int main() {
    std::cin.tie(NULL);
    ll n, m;
    std::cin >> n >> m;
    ll diff = n%5+m%5-4;
    ll base = n/5*m;
    ll rest = (n%5)*(m/5) + (diff>0?diff:0);
    ll sum = base + rest;
    std::cout << sum << std::endl;
}