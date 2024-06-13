#include <bits/stdc++.h>
using namespace std;

int main() {    
 	int a,b; cin>>a>>b;
 	int Max = max(a,b);
 	int rollmin = (6-Max+1);

 	int GCD = __gcd(6, rollmin);
 	cout<<rollmin/GCD << "/" << 6/GCD;
 	return 0;
}