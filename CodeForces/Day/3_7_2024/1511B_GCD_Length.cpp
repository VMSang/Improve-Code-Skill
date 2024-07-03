#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
const int N = 112345;
const int inf = 1e9+7;

void solvetask()
{
    int a,b,c;
    cin >> a >> b >> c;
    a--;b--;

    ll num1 = (ll)pow(10,a);
    ll num2 = (ll)pow(10,b)+ (ll)pow(10,(c-1));
    cout << num1 << " " << num2 << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solvetask();
        
}