#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
    	int n; cin>>n;
    	string s; cin>>s;
    	int x = 0, y = 0;
    	bool flag = 0;
    	for(size_t i=0; i<s.size(); i++){
    		if(s[i] == 'U') x+=1;
    		else if (s[i] == 'D') x-=1;
    		else if (s[i] == 'R') y+=1;
    		else y-=1;
    		if (x == 1 && y == 1){
    			cout<<"YES\n";
    			flag = 1;
    			break;
    		}
    	}
    	if (!flag){
    		cout<<"NO\n";
    	}

    }
    return 0;
}