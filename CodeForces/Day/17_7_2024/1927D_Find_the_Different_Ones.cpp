#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
void solve(){
    int n;
    cin>>n;
    int a[n];
    vector<int>b(n+1,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0;
    for(int i=1;i<=n;i++){
        if(a[i-1]!=c){
            b[i]=i-1;
        }
        else{
            b[i]=b[i-1];
        }
        c=a[i-1];
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int x,y;
        cin>>x>>y;
        if(b[y]<x){
            cout<<-1<<" "<<-1<<endl;
        }
        else{
            cout<<b[y]<<" "<<y<<endl;
        }
    }
    cout<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
    