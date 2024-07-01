#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int> v(n);
    for(int &x : v){
    	cin>>x;
    }

    sort(v.begin(), v.end());
    
    for(int i=0; i<n-2; i++){
    	if(v[i]+v[i+1] > v[i+2]){
    		cout<<"YES";
    		return 0;
    	}
    } 
    cout<<"NO";
    return 0;
}