#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define vec vector
#define pb push_back
#define PDD pair<double,double>
#define PLL pair<ll,ll>
#define PII pair<int,int>
#define INF 0x3f3f3f3f
#define i128 __int128
#define ld long double
#define pi 3.1415926535
//const ll mod=1e9+7;
const ll mod=998244353;
bool isprime(ll x){
    if(x==1)return false;
    for(ll i=2;i<=x/i;i++){
        if(x%i==0)return false;
    }
    return true;
}
ll popcnt(ll x){
    ll cnt=0;
    while(x){
        if(x&1)cnt++;
        x>>=1;
    }
    return cnt;
}
ll qmi(ll a,ll b,ll p){
    if(b==0)return 1;
    if(a==0)return 0;
    a%=p;
    ll res=1;
    while(b){
        if(b&1)res=res*a%p;
        a=a*a%p;
        b>>=1;
    }
    return res;
}
ll exgcd(ll a,ll b,ll &x,ll &y){
    if(!b){
        x=1,y=0;
        return a;
    }
    ll d=exgcd(b,a%b,y,x);
    y-=a/b*x;
    return d;
}
ll lowbit(ll x){return x&-x;}
const int N=1e6+10;
ll fact[N],infact[N];
//ll C(ll n,ll m) {
//    if (n < m || m < 0)return 0;
//    return fact[n] * qmi(fact[m] * fact[n - m] % mod, mod - 2, mod) % mod;
//}
//int gcd(int a,int b) {
//    int r;
//    while (a%b!=0)
//    {
//        r=a%b;
//        a=b;
//        b=r;
//    }
//    return b;
//}
ll C(ll n,ll m){
    if (n < m || m < 0)return 0;
    return fact[n]%mod*infact[m]%mod*infact[n-m]%mod;
}
//void scan(__int128 &x)
//{
//    x=0;int f=1;char ch=getchar();
//    while (!isdigit(ch)){if (ch=='-')f=-1;ch=getchar();}
//    while(isdigit(ch)){x=x*10+ch-48;ch=getchar();}
//    x*=f;
//}
//inline void print(__int128 x) {
//    if (x < 0) {
//        putchar('-');
//        x = -x;
//    }
//    if (x > 9) print(x / 10);
//    putchar(x%10+'0');
//}
//------------------------------------------
ll a[N];
void solve(){
    ll n,x;cin>>n>>x;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    ll ans=0,sum=0;
    for(int i=n;i;i--){
        sum+=a[i];
        if(sum>=x*(n-i+1))ans=n-i+1;
        else break;
    }
    cout<<ans<<endl;
}
int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T = 1;
    cin>>T;
    while (T--)solve();
    return 0;
}