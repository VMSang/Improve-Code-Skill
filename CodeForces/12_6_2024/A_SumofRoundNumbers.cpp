#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	int t; cin>>t;
 	while (t--){
 		int n; cin>>n;
 		vector<int> v;
 		int mutip = 1;
 		while(n > 0){
 			int digit = n%10;
 			if(digit != 0){
 				v.push_back(digit*mutip);
 			}
 			n/=10;
 			mutip *= 10;
 		}
 		cout<<v.size()<<endl;
 		for(int x : v){
 			cout<<x<<" ";
 		}
 		cout<<endl;
 	}   
    return 0;
}