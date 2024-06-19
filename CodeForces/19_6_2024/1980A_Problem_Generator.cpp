#include <bits/stdc++.h>
using namespace std;

int cntA[7];

int main() {
    int t; cin>>t;
    while(t--){
 		int n, m; cin>>n>>m;
 		string s; cin>>s;
 		set<char> se;

 		fill(cntA, cntA + 51 + 1, 0);
 		for(char x : s){
 			cntA[x-'A']++;
 		}

 		int cnt = 0;
 		for(int i=0; i<m; i++){	//round
 			for(size_t j=0; j<7; j++){
 				cntA[j]--;
 				if(cntA[j] < 0){
 					cnt++;
 				}
 			}
 		}
 		cout<<cnt<<endl;
    }
    return 0;
}