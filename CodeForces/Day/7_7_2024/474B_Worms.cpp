#include<bits/stdc++.h>
#define endl '\n'
#define FAST_IO ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
typedef long long int ll ;

using namespace std ;

int main()
{
    FAST_IO ;
    int n ; cin>>n ;
    vector<int>a(n) ;

    for(int &x:a) cin>>x ;

    int m ; cin>>m ;
    vector<int>q(m);

    for(int &x:q) cin>>x ;

    vector<int>pre_sum(n) ;
    int sum = 0 ;
    for(int i = 0 ; i<n ; i++)
    {
        sum += a[i] ;
        pre_sum[i] = sum ;
    } 

    for(int i = 0 ; i<m ;i++)
    {
        auto it = lower_bound(pre_sum.begin(),pre_sum.end(),q[i]) ;
        int idx = it - pre_sum.begin() ;
        cout<<idx+1<<endl;
    }
}
 			 		 	    		  				 			 	 		