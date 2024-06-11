#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	int n; cin>>n;
 	bool flag = 0;
 	while (n--){
 		int a; cin>>a;
 		if (a == 1)
 			flag = 1;
 	}   
 	if (flag != 0)
 		cout<<"HARD";
 	else
 		cout<<"EASY";
    return 0;
}