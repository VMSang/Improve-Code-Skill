#include<bits/stdc++.h>
using namespace std;
#define e endl
#define int long long
#define ip(s) int s;cin>>s;
#define ipp(arr,n) int arr[n];f(n)cin>>arr[i];
#define f(n) for(int i=0;i<n;i++)
vector<char>arr;
char re(char s){
    if(s=='p')s='c';
    else s='p';
    return s;
}

map<pair<int,char>,int>mp;
int fun(int n,char prev){
    if(n==0)return 1;
    if(mp[{n,prev}]!=0)return mp[{n,prev}];
    int k=0;
    if(arr[n-1]=='0') { k= 1+ fun(n-1,'r');mp[{n,prev}]=k;return k;}
    else if(prev!='r'){
        if(arr[n-1] == prev){k= 1+ fun(n-1,'r');}
        else k=(fun(n-1,re(prev)));
        
    }
    else if(prev=='r'){
        if(arr[n-1]!='3')k= fun(n-1,arr[n-1]);
        else{
            k= min(fun(n-1,'p'),fun(n-1,'c'));
        }
    }
    mp[{n,prev}]=k;
    return k;
}
void solve(){
    ip(n);f(n){ip(x);
    if(x==0)arr.push_back('0');
    if(x==1)arr.push_back('c');
    if(x==2)arr.push_back('p');
    if(x==3) arr.push_back('3');
    }
    cout<<fun(n,'r')-1<<e;

}
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t=1;
// cin>>t;
while(t--)solve();
return 0;
}