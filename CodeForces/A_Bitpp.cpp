#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// x++
// x--
// ++x
// --x
int main() {    
 	int n; cin>>n;
 	cin.ignore();
 	int x = 0;
 	while(n--){
 		string s;
 		getline(cin, s);
 		if ((s[0] == 'X' && s[2] == '+') || (s[0] == '+' && s[2] == 'X'))
 			x++;
 		else
 			x--;
 	}   
 	cout<<x;
    return 0;
}