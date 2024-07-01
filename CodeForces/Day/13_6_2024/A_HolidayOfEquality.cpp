#include <bits/stdc++.h>
using namespace std;

int main() {    
 	int n; cin>>n;
 	int a[n], MAX = INT_MIN, sum =0; 
 	for(int i=0; i<n; i++){
 		cin>>a[i];
 		MAX = max(MAX, a[i]);
 	}   
 	for(int i=0; i<n; i++){
 		if (a[i] < MAX){
 			sum += MAX - a[i];
 		}
 	}
 	cout<<sum;
    return 0;
}