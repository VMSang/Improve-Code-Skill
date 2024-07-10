#include<bits/stdc++.h>
using namespace std;

long long k[300069],dp[300069],c[300069];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long tc,i,j,ans=0,n,m;
    cin>>tc;
    for(;tc--;)
    {
        cin>>n>>m;
        long long ls = 1;
        for(i=1;i<=n;i++)
        {
            cin>>k[i];
        }
        for(i=1;i<=m;i++)
        {
            cin>>c[i];
        }
        sort(k+1,k+n+1,greater<long long>());
        dp[0] = 0;
        c[m+1] = 1e18;
        for(i=1;i<=n;i++)
        {
            if(c[ls]<c[k[i]])
            {
                dp[i] = dp[i-1] + c[ls];
                ls++;
            }
            else
            {
                dp[i] = dp[i-1] + c[k[i]];
            }
        }
        cout<<dp[n]<<endl;
    }
}                                                              