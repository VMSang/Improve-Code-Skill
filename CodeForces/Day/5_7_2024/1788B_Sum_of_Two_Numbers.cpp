#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#ifdef ONLINE_JUDGE
#define debug(...) ;
#define endl '\n'
#endif
const ll maxn=2e5+10;
const ll mod=1e9+7;
const ll N=1e9+10;
/*————————————————————code—————————————————————*/
void solve(){
	string s;cin>>s;
	string s1,s2;
	int ans1=0,ans2=0;
	int flag=1;
	for(int i=0;i<s.size();i++){
		int n=s[i]-'0';
		int t1=n/2;
		int t2=n-n/2;
		if(t1==t2){
			ans1=ans1*10+t1;
			ans2=ans2*10+t2;
			continue;
		}
		if(flag==1){
			ans1=ans1*10+t2;
			ans2=ans2*10+t1;
		}
		else {
			ans1=ans1*10+t1;
			ans2=ans2*10+t2;
		}
		flag=-flag;
	}
	cout<<ans1<<" "<<ans2<<endl;
}
/*————————————————————code—————————————————————*/
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll T=1;cin>>T;
    while(T--)solve();
}
