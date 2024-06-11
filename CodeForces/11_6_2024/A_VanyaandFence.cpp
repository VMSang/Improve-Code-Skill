#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
	int n, h; cin>>n>>h;
	int minW = 0;
	while(n--){
		int hi; cin>>hi;
		if (hi > h)
			minW+=2;
		else
			minW+=1;
	}   
	cout<<minW;
    return 0;
}