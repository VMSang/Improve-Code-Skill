#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	int n; cin>>n;
 	int dem = 0;
 	while(n--){
 		int a,b,c;
 		cin>>a>>b>>c;
 		if ((a + b + c) >= 2)
 			dem ++;
 	}
 	cout<<dem;
    return 0;
}

// cach khac
// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() {    
//  	int n; cin>>n;
//  	cin.ignore();
//  	int dem = 0;
// 	while(n--){
// 		string s;
// 		getline(cin, s);
// 		if (s[0] == '1' && s[2] == '1'){
// 			dem++;
// 		} else if (s[2] == '1' && s[4] == '1'){
// 			dem++;
// 		} else if(s[0] == '1' && s[4] == '1'){
// 			dem++;
// 		}
// 	}
// 	cout<<dem;
//     return 0;
// }