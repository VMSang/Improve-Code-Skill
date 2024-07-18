#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 


int main()
{	
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);  
   int t;
   cin>>t;
   while(t--)
   {
   	  int n;
   	  cin>>n;
   	  vector<int>A(n);
   	  for (int i=0;i<n;i++)
   	  cin>>A[i];
   	  vector<int>SOL;
   	  SOL.push_back(A[0]);
   	  int last_ind=0;
   	  for (int i=1;i<n-1;i++)
   	  {
   	  	  if (A[last_ind] == A[i]) continue;
   	  	  if ( (A[last_ind]<= A[i]  && A[i]<=A[i+1]) || (A[last_ind]>= A[i]  && A[i]>=A[i+1])) 
   	  	  {
   	    		continue;
	      }
		  else
		  {
			   SOL.push_back(A[i]);
			   last_ind=i;
		  }
	  }
   	  SOL.push_back(A[n-1]);
   	  int L=SOL.size();
   	  cout<<L<<"\n";
   	  for (int i=0;i<L;i++)
   	  cout<<SOL[i]<<" ";
   	  cout<<"\n";
	}
}
