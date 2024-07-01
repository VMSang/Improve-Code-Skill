#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
 		int n; cin>>n;
 		int winIdx = 0, idx = 0, Max = INT_MIN;
 		while(n--){
 			int a, b; cin>>a>>b;
			idx++;
 			if(a<=10 && b > Max){
 				Max = b;
 				winIdx = idx;
 			}
 		}
 		cout<<winIdx<<endl;
    }
    return 0;
}