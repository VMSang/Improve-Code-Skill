//nếu tại s[i] khác đang kiểm tra thì đổi kiểm tra sang cái còn lại
//và reset cnt
//dùng string ouput để cập nhật result thay vì flag và if
#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin>>s;
    char change = -1;
    int cnt = 0;
    string output = "NO";

    for(int i=0; i<s.size(); i++){
    	if(s[i] != change){
    		change = s[i];
    		cnt = 0;
    	}

    	cnt++;

    	if(cnt >= 7){
    		output = "YES";
    		break;
    	}
    }

    cout<<output;
    return 0;
}