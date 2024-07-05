#include <bits/stdc++.h>
#define endl         '\n'
#define mem(a, k)    memset(a, k, sizeof(a))
#define debug(a)     cout << "Debuging...|" << #a << ": " << (a) << "\n";
#define SZ(x)        ((int)(x.size()))
#define all(x)       (x).begin(), (x).end()
#define allr(x)      (x).rbegin(), (x).rend()
#define just         return
#define Yoimiya      0
#define fi           first
#define se           second
#define pb           push_back
#define eb           emplace_back
#define mk           make_pair
#define int          long long
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair< int, int > PII;
typedef pair< ll, ll > PLL;
typedef pair< double, double > PDD;

mt19937 mrand(random_device{}());
inline int rnd(int x) {return mrand() % x;}
inline int lowbit(int x) {return x & -x;}
ll qmi(ll a,ll k,ll p){ll res = 1;while (k) {if (k&1) res = res * a % p; k >>= 1;a = a * a % p;}return res;}
const double eps = 1e-8;
const double pi = acos(-1.0);
const ll INF = 1e18;
const int N = 1e5 + 10, M = 2 * N, mod = 1000000007;


void solve() {
    int hc, dc, hm, dm;
    cin >> hc >> dc >> hm >> dm;
   int k, w, a;
   cin >> k >> w >> a;
   for (int i = 0; i <= k; i ++) {
       int hhc = hc + i * a, ddc = dc + (k - i) * w;
       int d1 = (hhc + dm - 1) / dm, d2 = (hm + ddc - 1) / ddc;
       if (d1 >= d2) {
           cout << "YES" << endl;
           just;
       }
   }
   cout << "NO" << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    just Yoimiya;
}
