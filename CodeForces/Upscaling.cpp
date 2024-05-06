#include <bits/stdc++.h>
using namespace std;


int main() {
	int bien = 2;
 	int t; cin>>t;
 	while (t--){
 		int n; cin>>n;
 			int tmp = n;
 		for(int i=0; i<n; i++){
 			while(bien--){
 				while(tmp--){
 					cout<<"##";
 					if(tmp-1 != 0) cout<<"..";
 					}
 				cout<<endl;
 				}
 			while(bien--){
 				while(tmp--){
 					cout<<"..";
 					if(tmp-1 != 0) cout<<"##";
 				}
 				cout<<endl;
 			}
 		}
 	}   
    return 0;
}