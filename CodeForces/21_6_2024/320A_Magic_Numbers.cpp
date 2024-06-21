//xét từng bộ, nếu không có 1 đầu tiên thì NO 
#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin>>s;
    int idx = 0;
    string output = "YES";
    bool flag = false;
    while(idx != s.size()){
    	if(s[idx] == '1'){
    		//xem nó thuộc trường hợp nào 1, 14, 144
    		if(idx <= (s.size() - 2) && s[idx + 1] == '4'){
    			if(idx <= (s.size() - 3) && s[idx + 2] == '4') idx += 3;
    			else idx += 2;
    		} else idx += 1;
    	} else {
    		cout<<"NO";
    		flag = true;
    		break;
    	}
    }
    if(flag != true) cout<<"YES";
    return 0;
}