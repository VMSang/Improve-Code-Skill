#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
 		int n; cin>>n;
 		vector<int> v(n);
 		for(int &x : v){
 			cin>>x;
 		}

 		int idxEven = 0, idxOdd = 1;
 		bool flag = false;
 		while(idxEven + 2 < v.size()){
 			if(v[idxEven] % 2 != v[idxEven + 2] % 2){
 				cout<<"NO\n";
 				flag = true;
 				break;
 			}
 			idxEven+=2;
 		}
 		if(flag != true){
 			while(idxOdd + 2 < v.size()){
 				if(v[idxOdd] % 2 != v[idxOdd + 2] % 2){
 					cout<<"NO\n";
 					flag = true;
 					break;
 				}
 				idxOdd+=2;
 			}
 		}
 		if(flag == false){
 			cout<<"YES\n";
 		}
    }
    return 0;
}