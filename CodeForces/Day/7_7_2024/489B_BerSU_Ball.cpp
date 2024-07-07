#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int m;cin>>m;
    int b[m];
    for(int i=0;i<m;i++)cin>>b[i];
    sort(b,b+m);
    int i=0,j=0,ans=0;
    while(i<n&&j<m){
        if(abs(a[i]-b[j])<2){
            ans++;
            i++;j++;
        }
        else if(a[i]>b[j])j++;
        else i++;
    }
    cout<<ans;
}
int32_t main(){
    // int t;cin>>t;
    // while (t--)
    solve();
}