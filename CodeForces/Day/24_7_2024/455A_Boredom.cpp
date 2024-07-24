#include "bits/stdc++.h"

using namespace std;

int main(){
    long long n, mx = 0;
    cin >> n;
    long long a[n];
    long long ans[(long long)10e5 + 1];
    unordered_map<long long, long long> count;
    
    for(long long i = 0; i < n; i++){
        cin >> a[i];
        count[a[i]]++;    
        mx = max(a[i], mx);
    } 
    ans[0] = 0;
    ans[1] = count[1];
    for(long long i = 2; i <= mx; i++){
        ans[i] = max(ans[i - 2] + count[i] * i, ans[i - 1]);
    }
    cout << ans[mx];
}