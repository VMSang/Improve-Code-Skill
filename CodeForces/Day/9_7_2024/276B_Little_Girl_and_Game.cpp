#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define ll long long

map<char,int> mp;
int gan;
int main(){
    string s; cin>>s;
    int n = s.size();
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    for(int i=1;i<=26;i++){
        if(mp[(char)(i+96)] % 2){
            gan++;
        }
    }
    if(gan == 0) cout<<"First";
    else if(gan%2 == 0) cout<<"Second";
    else cout<<"First";
}

		  	    		   	 		  		   			  	