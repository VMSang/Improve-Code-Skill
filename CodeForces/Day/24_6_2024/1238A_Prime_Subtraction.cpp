//Mọi số khác 1 luôn là ước của một snt, nên có thể trừ z/p lần

#include <bits/stdc++.h>
 using namespace std;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase; cin>>testCase;
    while(testCase--){
 		long long x, y; cin>>x>>y;
 		cout<<(x-y > 1 ? "YES\n" : "NO\n");
    }
    return 0;
} 

//Goldbach's Conjecture
// #include <bits/stdc++.h>
// using namespace std;

// bool prime(int n){
// 	if(n < 2) return false;
// 	if(n == 2 || n ==3) return true;
// 	if(n%2 == 0 || n%3 == 0) return false;
// 	for(int i=5; i*i <= n; i+=6){
// 		if(n%i == 0 || n%(i+2) == 0) return false;
// 	}
// 	return true;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int testCase; cin>>testCase;
//     while(testCase--){
// 		long long x, y;
// 		cin>>x>>y;
// 		long long dis = x - y;
// 		// cout<<dis<<endl;
// 		string output = "NO";
// 		if(prime(dis)){
// 			output = "YES";
// 		} else if(dis > 1) {
// 			for(int i=2; i<=dis/2; dis++){
// 				if(prime(i)){
// 					int b = dis - i;
// 					// cout<<b<<endl;
// 					if(prime(b)){
// 						output = "YES";
// 						// cout<<i<<" "<<b<<endl;
// 						break;
// 					}
// 				}
// 			}
// 		}
// 		cout<<output<<endl;
//     }
//     return 0;
// }