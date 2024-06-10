#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string inthuong(string s){
    for(char& x : s){
        x = tolower(x);
    }
    return s;
}

int main() {    
 	string s, t;
 	cin>>s>>t;
    // s = inthuong(s);
    // t = inthuong(t);
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    transform(t.begin(), t.end(), t.begin(), ::toupper);

    if (s<t) cout<<-1;
    else if(s>t) cout<<1;
    else cout<<0; 		   
    return 0;
}