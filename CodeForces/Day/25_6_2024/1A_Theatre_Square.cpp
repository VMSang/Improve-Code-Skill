//ceil(x/y) = (x+y-1) / y
#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m, a; cin>>n>>m>>a;

    // cout<< ((n+a-1)/a) * ((m+a-1)/a);
    cout<< (n/a + (n%a > 0)) * (m/a + (m%a > 0));

    return 0;
}