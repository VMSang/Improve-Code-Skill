#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mp(a,b) make_pair(a,b)
#define vi vector<int>
#define mii map<int,int>
#define mpi map<pair<int,int>,int>
#define vp vector<pair<int,int> >
#define pb(a) push_back(a)
#define fr(i,n) for(i=0;i<n;i++)
#define rep(i,a,n) for(i=a;i<n;i++)
#define F first
#define S second
#define endl "\n"
#define fast std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define dom 998244353
#define sl(a) (int)a.length()
#define sz(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define pii pair<int,int> 
#define mini 2000000000000000000
#define time_taken 1.0 * clock() / CLOCKS_PER_SEC
//const long double pi = acos(-1);
//mt19937_64 mt(chrono::steady_clock::now().time_since_epoch().count());
//primes for hashing 937, 1013
template<typename T, typename U> static inline void amin(T &x, U y) 
{ 
    if (y < x) 
        x = y; 
}
template<typename T, typename U> static inline void amax(T &x, U y) 
{ 
    if (x < y) 
        x = y; 
}
void shikhar7s(int cas)
{
    int n,i;
    cin>>n;
    string s;
    cin>>s;
    int f=1,z=0;
    fr(i,n)
    {
        if(s[i]=='0')
            z++;
    }
    int x=0;
    fr(i,n/2)
    {
        if(s[i]!=s[n-1-i])
        {
            f=0;
            x++;
        }
    }
    if(f)
    {
        if(z==1||z%2==0)
            cout<<"BOB"<<endl;
        else
            cout<<"ALICE"<<endl;
    }
    else
    {
        if(x==1&&z==2)
            cout<<"DRAW"<<endl;
        else
            cout<<"ALICE"<<endl;
    }
}
signed main()
{
    fast;
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);
    int t=1;
    cin>>t;
    int cas=1;
    while(cas<=t)
    {
    //cout<<"Case #"<<cas<<": ";
    shikhar7s(cas);
    cas++;
    }
    return 0;
}