#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    string hello = "hello";
    int i = 0;

    for(char x : s){
    	if(i<5 && x == hello[i]){
    		i++;
    	}
    }

    if(i == 5){
    	cout<<"YES";
    } else {
    	cout<<"NO";
    }
    return 0;
}