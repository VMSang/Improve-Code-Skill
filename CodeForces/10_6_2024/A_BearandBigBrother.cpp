#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	int a, b; cin>>a>>b;
 	int cnt = 0;
 	while(1){
 		if(a>b){
 			break;
 		}
 		a = a*3;
 		b = b*2;
        cnt++;
 	}   
 	cout<<cnt;
    return 0;
}