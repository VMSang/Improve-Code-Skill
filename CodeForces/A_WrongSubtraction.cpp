#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	int a, b; cin>>a>>b;
 	while(b--){
 		int cal = a%10;
 		if (cal != 0){
 			a--;
 		} else {
 			a/=10;
 		}
 	}   
 	cout<<a;
    return 0;
}