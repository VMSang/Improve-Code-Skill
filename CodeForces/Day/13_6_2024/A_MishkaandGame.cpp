#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    int awin = 0, bwin = 0;
    while(t--){
 		int a,b; cin>>a>>b;
 		if(a>b) awin++;
 		else if(a<b) bwin++;
    }
    if(awin>bwin) cout<< "Mishka";
    else if(awin<bwin) cout<< "Chris";
    else cout<<"Friendship is magic!^^";
    return 0;
}