#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
    string s;
    set<char> se;
    cin>>s;
    int cnt=0;
    for(char x : s){
    	se.insert(x);
    }
    int check = se.size()%2;
    if (check == 0)
    	cout<<"CHAT WITH HER!";
    else
    	cout<<"IGNORE HIM!";
    return 0;	
}