#include "bits/stdc++.h"

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<long long, long long>> a(n + 1, {LLONG_MAX, 0}), ans(n);
    
    for(pair<long long, long long> & k: a) cin >> k.first >> k.second;
    
    ans[0] = {(long long)1, a[0].first};
    for(int i = 1; i < n; i++){
        ans[i].first = ans[i - 1].first;
        ans[i].second = a[i].first;
        if(a[i].first - a[i].second > ans[i - 1].second){
            ans[i].first++;
        }
        else if(a[i + 1].first > a[i].first + a[i].second){
            ans[i].first++;
            ans[i].second = a[i].first + a[i].second;
        }
    }
    
    cout << ans[n - 1].first << endl;
}