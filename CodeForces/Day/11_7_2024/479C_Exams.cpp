#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define fo(i, n) for (ll i = 0; i < n; i++)
#define Fo(i, k, n) for (ll i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define pb push_back
#define F first
#define S second
typedef vector<long long> vll;
const ll MOD = 1e9 + 7;



void solve(){
  // freopen("haybales.in","r",stdin);
  // freopen("haybales.out","w",stdout);
  ll n;cin>>n;
  vector<pair<ll,ll>> v;
  fo(i,n){
    ll a,b;cin>>a>>b;
    v.pb({a,b});
  }
  sort(v.begin(),v.end());
  ll ans = v[0].S;
  Fo(i,1,n){
    if(v[i].S>=ans){
      ans = v[i].S;
    }
    else{
      ans = v[i].F;
    }
  }
  cout<<ans;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll t;
  t = 1;
  // cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}