#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(int year){
	string year_str = to_string(year);
	unordered_set<char> digits(year_str.begin(), year_str.end());
	return digits.size() == 4; 
}
int main() {    
    int year; cin>>year;
    while(1){
    	year++;
   	    if(check(year)){
   	    	cout<<year;
   	    	break;
   	    }
    }
    return 0;
}

//code trau
// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() {    
// 	int y; cin>>y;
// 	while(1){
// 		y++;
// 		string conver = to_string(y);
// 		if(conver[0] != conver[1] &&
// 		conver[1] != conver[2] && 
// 		conver[2] != conver[3] && 
// 		conver[0] != conver[3] &&
// 		conver[0] != conver[2] &&
// 		conver[1] != conver[3]){
// 			cout<<y;
// 			break;
// 		}
// 	} 	   
//     return 0;
// }