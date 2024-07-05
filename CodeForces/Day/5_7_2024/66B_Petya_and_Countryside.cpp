#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ordered_set(T) tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>
#define NO cout << "NO\n"
#define YES cout << "YES\n"
#define range(x) x.begin(), x.end()
#define rrange(x) x.rbegin(), x.rend()
#define fillVec(a)    \
        for (auto &x : a) \
        cin >> x
#define printVec(a)       \
        for (auto x : a)      \
            cout << x << " "; \
        cout << '\n'
#define ll long long
#define ld long double
#define ull unsigned long long
#define PI 3.1415926535897932384626433832795

void boost()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

//? bitmask useful formulas
// x | (1 << j)                             //! (Set) turns on the j-th bit
// x & ~(1 << j) OR ~(~x | (1 << j))        //! (Clear) turns off the j-th bit
// x ^ (1 << j)                             //! (Toggle) flips a bit
// x & (1 << j) == number                   //! (Check) number == 0 ? isOff : isOn (1 << j);
// (((~x)+1) & x)                           //! keeps LSB
// x & -x == LSB                            //! gets LSB
// (x & (x-1))                              //! turns off LSB
// (1 << n) - 1                             //! turns on all bits
// (1 << n) ===                             //! number of subsets
// for (x = y; x > 0; x = (y & (x - 1)))    //! iterate through all subsets of y without the empty set

void code()
{
    int n;
    cin >> n;
    vector<int>a(n);
    fillVec(a);
    int hm = 0;
    for (int i = 0; i < n; i++)
    {
        int l = 0, r = 1, j = i;
        while (j - 1 >= 0 && a[--j] <= a[j + 1])
            l++;
        j = i;
        while (j + 1 < n && a[++j] <= a[j - 1])
            r++;
        hm = max(hm, l + r);
    }
    cout << hm << '\n';
}

int main()
{
    boost();
    int t = 1;
    // cin >> t;
    while (t--)
        code();
    return 0;
}
