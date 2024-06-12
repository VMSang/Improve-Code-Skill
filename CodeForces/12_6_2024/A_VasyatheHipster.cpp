#include <bits/stdc++.h>
using namespace std;

int main() {    
 	int a, b; cin>>a>>b;
 	int dayD = 0, dayS = 0;
 	while(1){
 		a--; b--;
 		dayD++;
 		if (a==0 || b==0) break;
 	}    	
 	if(a>1){
 		dayS+= a/2;
 	} else if(b>1){
 		dayS+=b/2;
 	}
 	cout<<dayD<<" "<<dayS;
    return 0;
}

