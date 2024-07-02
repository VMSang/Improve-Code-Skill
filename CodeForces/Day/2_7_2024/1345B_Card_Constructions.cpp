#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long int
#define ull unsigned long long int
#define ff float
#define df double
#define lf long double
#define vi vector<int>
#define vpi vector<pair<int,int> >
#define pi pair<int,int>
#define all(x) (x).begin(), (x).end()
#define rev_all(x) (x).rbegin(), (x).rend()
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
 
using namespace std;
 
void maxify(int& a, int&b, int&c) {
    if(a > c) swap(a , c);
    if(a > b) swap(a, b);
    if(b > c) swap(b, c);
}

void solve() {
    long long n, ans = 0;
    cin >> n;
    while(n > 1) {
        for(long long i = 1; i < 44721; i++) {
            if(3 * i * i + i > n * 2) {
                n -= (3 * (i - 1) * (i - 1) + i - 1) / 2;
                break;
            }
        }
        ans ++;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int tcc;
    cin >> tcc;
    while(tcc -- )
        solve();
     
    return 0;
}