// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() {    
//     string a, b, c;
//     cin>>a>>b>>c;
//     string plus = a + b;

//     sort(plus.begin(), plus.end());
//     sort(c.begin(), c.end());

//     if (plus == c)
//     	cout<<"YES";
//     else
//     	cout<<"NO";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
 	string a,b,c;
 	cin>>a>>b>>c;
 	array<char, 26> count = {0};
 	for(char x : a){
 		count[x - 'A']++;
 	}

 	for(char x : b){
 		count[x - 'A']++;
 	}   
    
    for(char x : c){
    	count[x - 'A']--;
    }

    bool flag = 0;
    for(int i=0; i<count.size(); i++){
    	if (count[i] != 0){
    		flag = 1;
    		break;
    	}
    }
    if (flag == 1) cout<<"NO";
    else cout<<"YES";
    return 0;
}