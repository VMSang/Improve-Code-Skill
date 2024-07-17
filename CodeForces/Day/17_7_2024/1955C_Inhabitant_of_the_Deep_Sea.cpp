#include<bits/stdc++.h>
using namespace std; 
#define int long long
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q; 
    cin>>q; 
    while(q--){
        int n, k; 
        cin>>n>>k;
        vector<int>tab;
        vector<int>pref(n+1);
        vector<int>suf(n+1);
        for(int i=0;i<n;i++){
            int a; 
            cin>>a;
            tab.push_back(a);
        }
        pref[0]=tab[0];
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+tab[i];
        }
        suf[n-1]=tab[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+tab[i];
        }
        if(k>=pref[n-1]){cout<<n<<"\n";continue;}
        int zatopione=0;
        for(int i=0;i<n;i++){
            if(pref[i]>k/2+k%2){
                zatopione=i;
                break;
            }
        }
        //cout<<zatopione<<"\n";
        int j=0;
        for(int i=n-1;i>=0;i--){
            if(suf[i]>k/2){
                //cout<<suf[i]<<"\n";
                cout<<zatopione+j<<"\n";
                break;
            }
            j++;
        }
        
    }
    return 0;
}