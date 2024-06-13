#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> generate(){
	vector<int> v;
	for(int i=1; i<INT_MAX; i++){
		if(i%3!=0 && i%10!=3){
			v.push_back(i);
		}
		if(v.size() == 1000) break;
	}
	return v;
}
int main() {    
    int t; cin>>t;
    vector<int> v = generate();
    while(t--){
    	int n; cin>>n;
    	cout<<v[n-1]<<endl;
    }
    return 0;
}