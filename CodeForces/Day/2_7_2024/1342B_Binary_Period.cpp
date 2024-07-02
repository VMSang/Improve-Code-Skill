#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
#define form2n(i, m, n) for (int i = m; i < n; i++)
#define rforn(i, n) for (int i = n; i > 0; i--)
#define rform2n(i, m, n) for (int i = n; i > m; i--)
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvll vector<vll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define lcm(a, b) (a * b) / __gcd(a, b)
#define yesno(b) if (b) cout << "YES\n"; else cout << "NO\n";

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t = 1;
    cin >> t;
    while (t--)
    {
        string t;
        cin >> t;
        const int len = t.length();
        bool b = true;
        for (int i = 1; i < len; i++)
        {
            if (t[i] != t[i - 1])
            {
                b = false;
                break;
            }
        }
        if (b)
        {
            cout << t << endl;
            continue;
        }
        int l = 0;
        for (int i = 0; i < len + l; i++)
        {
            char c = (t[i] == '0')? '1': '0';
            if (t[i + 1] == c)
                continue;
            t.insert(t.begin() + i + 1, c);
            l++;
            i++;
        }
        cout << t << endl;
    }
    return 0;
}

                                                                    