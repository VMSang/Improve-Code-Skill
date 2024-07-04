
#include <iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#define betoo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define el "\n"
using namespace std;
// sort(s.begin(),s.end());
// transform(s.begin(), s.end(), s.begin(),:: tolower); <==convert string to lower 
//sort(arr,arr+n);
//sort(arr,arr+n,greater<int>());
//  reverse(a,a+n);
// priority_queue<ll,vector<ll>,less<ll>>pq; sort from max to min
// priority_queue<ll,vector<ll>,greater<ll>>pq; sort from min to max
//stack<char>st;
 
//  struct points
//  {
//      string x;
//      int y;
//  };
//  void  it()
//  {
//       int n; cin>>n;
//     deque<int>v(n);
//     for(auto &i:v)
//     {
//         cin>>i;
//     }
     
//  }
//  bool compare(points a,points b) 
//  {
//      if(a.y==b.y)
//      {
//          return a.x<b.x;
//       }
//      else  
//      return a.y>b.y;
//  }
void solve()
{  
         int n; cin>>n;
          vector<int>v(n),even,odd;
         for(auto i:v)
         {
             cin>>i;
             if(i%2==0) even.push_back(i);
             else odd.push_back(i);
         }
         bool f=0;
         if(is_sorted(even.begin(),even.end())&&is_sorted(odd.begin(),odd.end())) f=1;
         cout <<  (f ? "YES": "NO")<<el;
        
}
  
int main() {
  
   // freopen("input.in", "r", stdin);
   // freopen("output.txt", "w", stdout);
     betoo 
      int t=1;
      cin >> t;
      while (t--) 
    {
        solve();
    }
 
    return 0;
}