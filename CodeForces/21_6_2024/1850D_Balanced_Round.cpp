//tìm dãy thỏa mã dài nhất sau đó n - max = số cái cần bỏ
#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase; cin>>testCase;
    while(testCase--){
 		int n, k; cin>>n>>k;
 		vector<int> v(n);
 		for(int &x : v){
 			cin>>x;
 		}       
 		sort(v.begin(), v.end());

 		int curr = 1, Max = 1; 	
 		for(int i=1; i<n; i++){
 			if(v[i - 1] + k >= v[i]){
 				curr++;
 				Max = max(curr, Max);
 			} else {
 				curr = 1;
 			}
 		}
 		cout<<n - Max<<endl;
    }
    return 0;
}