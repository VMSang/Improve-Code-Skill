#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define dcm(a) setprecision(a) << fixed
#define ll long long
#define F first
#define S second
typedef unsigned long long ull;
typedef unsigned int uint;
typedef long double ldbl;
typedef double dbl;
const ldbl E = 2.71828182845904523536;
const ldbl pi = acos(-1);
const dbl eps = 1e-9;
const ll mod = 1e9 + 7;
const ll inf = 1LL << 30;
const string abcd = "ABCdefghijklmnopqrstuvwxyz";
const ll N = 1e5 + 3;

int main()
{
    fast;
    int testCase = 1;
    // cin >> testCase;
    for (int test = 1; test <= testCase; test++)
    {
        int n, m;
        cin >> n;
        int a[n + 1];
        for (int i = 1, num; i <= n &&  cin >> num; i++) a[num] = i;
        cin >> m;
        ll suma = 0, sumb = 0;
        while (m--) {
            int num;
            cin >> num;
            suma += a[num];
            sumb += (n - a[num] + 1);
        }
        cout << suma << ' ' << sumb << '\n';
    }
    return 0;
}
