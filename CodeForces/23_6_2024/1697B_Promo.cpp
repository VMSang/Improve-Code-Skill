#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin>>n>>q;
    vector<long long> v(n), s(n+1);

    for(long long &x : v){
        cin>>x;
    }

    sort(v.begin(), v.end());

    for(int i=0; i<n; i++){
        s[i+1] = s[i] + v[i];
    }
    
    while(q--){
        int x,y;
        cin>>x>>y;
        cout<<s[n-x+y] - s[n-x]<<endl; 
    }
    return 0;
}