#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
    int n, cnt = 0; cin>>n;
    while (n--){
    	int p, q; cin>>p>>q;
    	int cal = q-p;
    	if(cal >= 2)
    		cnt++; 
    }
    cout<<cnt;
    return 0;
}