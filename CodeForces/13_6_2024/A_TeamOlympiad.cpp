#include <bits/stdc++.h>
using namespace std;

int main() {    
 	int n; cin>>n;
 	vector<int> v(n);
 	vector<int> one, two, three;
 	for(int i=0; i<n; i++){ //i is index of student
 		cin>>v[i];
 		if(v[i] == 1) one.push_back(i+1);
 		if(v[i] == 2) two.push_back(i+1);
 		if(v[i] == 3) three.push_back(i+1);
 	}   

 	int teams = min({one.size(), two.size(), three.size()});
 	cout<<teams<<endl;
 	for(int i=0; i<teams; i++){
 		cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
 	}
    return 0;
}