#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase; cin>>testCase;
    while(testCase--){
 		string s; cin>>s;
 		int pos;

 		bool winner = false;
 		while(s.find("01") != string::npos || s.find("10") != string::npos){
 			pos = s.find("01");
 			if(pos == string::npos){
 				pos = s.find("10");
 			}
 			s.replace(pos, 2, " ");
 			s.erase(pos, 1);
 			winner = !winner;
 		}
 		if(winner == true) cout<<"DA"<<endl;
 		else cout<<"NET"<<endl;
    }
    return 0;
}