#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
    ll t,n,i;
    fast;
    cin>>n;
    vector<ll> v(n);
    for(i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    ll c=0;
    ll s=0;
    for(i=0;i<n;i++){
        if(s>v[i]){
            c++;
        }else {
            s+=v[i];
        }
        
    }

    cout <<"\n"<< n-c<<"\n";
    return 0;
}