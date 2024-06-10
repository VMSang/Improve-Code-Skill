#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
	int a[5][5], initC, initR;
	bool flag = 0;
 	for(int i=0; i<5; i++){
 		for(int j=0; j<5; j++){
 			cin>>a[i][j];
 			if (a[i][j] == 1){
 				initR = i+1;
 				initC = j+1;
 				flag = 1;
 				break;
 			}
 		}
 		if (flag == 1){
 			break;
 		}
 	}  

 	int sum = abs(3 - initC) + abs(3 - initR);
 	cout<<sum;
    return 0;
}