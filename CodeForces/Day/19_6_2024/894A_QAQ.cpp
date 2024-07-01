#include <bits/stdc++.h>
using namespace std;

int main() {    
 	string s; cin>>s;
 	int q = 0, qa = 0, qaq = 0;
 	for(size_t i=0; i<s.size(); i++){
 		if(s[i] == 'A'){
 			qa+=q;
 		}
 		else if (s[i] == 'Q'){
 			q++;
 			qaq+=qa;
 		}
 	}   
 	cout<<qaq;
    return 0;
}