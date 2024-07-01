#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	int t; cin>>t;
 	while(t--){
 		int n; cin>>n;
 		vector<int> v(n);
 		unordered_map<int, int> frequency;
 		for(int i=0; i<n; i++){
 			cin>>v[i];
 			frequency[v[i]]++;
 		}
 		for(int i=0; i<n; i++){
 			if(frequency[v[i]] == 1){
 				cout<<i+1<<endl;
 				break;
 			}
 		}
 	}   
    return 0;
}