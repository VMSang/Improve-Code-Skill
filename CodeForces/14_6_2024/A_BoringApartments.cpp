#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
 		string s; cin>>s;
 		int n = s.size(); //idx
 		int first_digit = s[0] - '0';
 		// cout<<n<<" "<<first_digit<<endl;  
 		cout<<n * (n + 1) / 2+10*(first_digit-1)<<endl;

    }
    return 0;
}