#include<iostream>
#include<bits/stdc++.h>
#define f first
#define s second
#define int long long 
#define pb push_back
#define nl "\n"
#define vi vector<int>
#define vs vector<string>
#define vvi vector<pair<int,int>>
#define float long double
#define sot(a) sort(a.begin(),a.end())
#define inf 1e18
#define all(x) x.begin(),x.end()
using namespace std;

bool sec(pair<int,int> &a, pair<int,int> &b) {
    return a.f < b.f;
}
bool rev(int &a,int &b){
  return a>b;
}
int binpow(int a, int b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
void solve(){
int n,m; cin>>n>>m;
int x=n/m; int y = (n%m);
//cout<<x<<" "<<y<<nl;
int z=n-m+1;
if(m==1){
 cout<<((z*(z-1))/2)<<" "<<((z*(z-1))/2);
 return;  
}
cout<<(m-y)*((x*(x-1))/2)+(y)*((x*(x+1))/2)<<" ";
cout<<((z*(z-1))/2);
}

int32_t main() {
ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
// int t; cin>>t;
// while(t--){
//   solve();
//   cout<<nl;
// }
solve();
return 0;
}