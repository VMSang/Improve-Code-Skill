#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds; 

typedef pair<int,int> pii;
typedef long long ll;

#define int long long
#define ln '\n'
#define faster {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>   
#define all(v) v.begin(),v.end()

const int mod=1e9+7;
const int N=2e5+1;
int inf = 1e10+1;

int bigmod(int x, int n, int mod) {
    if(n == -1) n = mod-2;
    int ans = 1;
    while(n) {
        if((n & 1)) ans = (ans * x) % mod;
        n >>= 1;
        x = (x * x) % mod;
    }
    return ans;
}

void solve(){
    int n,k; cin>>n>>k;
    int a[n+1];
    a[0]=0;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a,a+n+1);
    for(int i=1;i<=n;i++)
        a[i] += a[i-1];
    int sm = 0;
    for(int i=n,j=2*k;i>=0 && j>=0;i--,j-=2){
        sm = max(a[i]-a[j],sm);
    }
    cout<<sm<<ln;
}

signed main(){
    faster
    int t=1;
    cin>>t;
    for(int cs=1;cs<=t;cs++){
        //cout<<"Case "<<cs<<": ";
        solve();
    }
    return 0;
}
