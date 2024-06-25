//tolower trả về int để gán cho char nên nếu dùng trực tiếp thì nên ép kiểu
#include <bits/stdc++.h>
using namespace std;

bool checkChar(char c){
	c = tolower(c);
	if(c == 'e' || c =='a' || c =='i' || c == 'o' || c =='u' || c =='y'){
		return 1;
	} else return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //method 1: 
    // string s; cin>>s;
    // vector<char> v;

    // for(char x : s){
    // 	//consonants 
    // 	if(checkChar(x) != 1){
    // 		//lowercase
    // 		if(x >= 97){
    // 			v.push_back('.');
    // 			v.push_back(x);
    // 		} else {
    // 			v.push_back('.');
    // 			v.push_back(x + 32);
    // 		}
    // 	}
    // }

    // for(char x : v){
    // 	cout<<x;
    // }

    //method 2
    char tmp;
    while(cin.get(tmp)){
    	if(!checkChar(tmp)){
    		cout<<'.'<< static_cast<char>(tolower(tmp));
    	}
    }

    return 0;
}