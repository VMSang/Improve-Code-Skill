#include <bits/stdc++.h>
using namespace std;
long long modulo = 1e9 + 7;
#define UHP ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define el '\n'
long long gcd(long long a, long long b) { return (!a) ? b : gcd(b % a, a); }
long long lcm(long long a, long long b) { return (a * b) / gcd(a, b); }
//cout << "output with setprecision " << fixed << setprecision(4) << y;
void solve();
int main() {
    /* ~ hello friend ~ */ UHP;
    int t = 1;
    //cin >> t;   
    while (t--)
        solve();
}

void solve()
{
    ll n;
    cin >> n;
    ll pwr = 0;
    ll ans = 0;
    while (n > 0)
    {
        if (n % 10 == 4)
            ans += pow(2, pwr);
        else
            ans += pow(2, pwr + 1);
        pwr++;
        n /= 10;
    }
    cout << ans<<el;
}

