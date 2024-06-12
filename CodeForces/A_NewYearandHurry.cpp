#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	int n, k, cnt = 0, sum = 0; cin>>n>>k;
 	int ThoiGianConLai = 240 - k;

 	for(int i=1; i<=n; i++){
 		sum += i*5;
 		if(sum > ThoiGianConLai){
 			break;
 		}
 		cnt++;
 	}
 	cout<<cnt;
    return 0;
}