#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 

int main() {	
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);  
   int t;
   cin>>t;
   while(t--)
   {
   	   
   	   int n;
   	   cin>>n;
   	   vector<int>A;
   	   vector<pair<int,int> >B;
   	   for (int i=1;i<=n;i++)
   	   {
   	   	          int x;
		 		  cin>>x;
				  if (x<i)
				  {
				   A.push_back(x);	
		 		   B.push_back({x,i});
		 	      }
	   }
	   int N=B.size();
	   long long int S=0;
	   int q=0;
	   sort(B.begin(),B.end());
	   for (int i=0;i<N;i++)
	   {
	   	   int k=B[i].second;
	   	   pair<int,int>P={k+1,-1};
	   	   auto it1= lower_bound(B.begin(),B.end(), P );
	   	   auto it2= B.end();
	   	   int Q= it2-it1;
	   	   S=S+Q;
	   }
	   cout<<S<<"\n";
   }
}
