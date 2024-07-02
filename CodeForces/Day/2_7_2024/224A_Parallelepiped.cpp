#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
 int x,y,z;
 cin>>x>>y>>z;
 int t=sqrt(x*y*z);
 cout<<4*(t/x+t/y+t/z)<<endl;
 return 0;
}