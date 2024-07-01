#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    int n;    cin>>n;
    int div=n/5;
    int po=0;
    if(div!=0)po=log((div+1))/log(2);
    n-=5*(pow(2,po)-1);
    if(n==0){
        cout<<"Howard"<<endl;
        return;
    }
    int k=pow(2,po);
    div=(n-1)/k;
    if(div==0)cout<<"Sheldon";
    else if(div==1)cout<<"Leonard";
    else if(div==2)cout<<"Penny";
    else if(div==3)cout<<"Rajesh";
    else cout<<"Howard";
}
int32_t main() {
    solve();
}