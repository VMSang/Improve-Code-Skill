#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll a,b,cnt=-1;
        vector <ll> v;
        string s;
        cin>>s;
        string ss = s;
        for(ll i = 0; i < s.size(); i++){
            for(ll k = 0; k < s.size(); k++){
                if(s[i] != s[k] and cnt==-1){
                    swap(s[i], s[k]);
                    cout<<"YES\n"<<s<<"\n";
                    cnt++;
                }
            }
        }
        if(cnt==-1){
            cout<<"NO\n";
        }
    }
}