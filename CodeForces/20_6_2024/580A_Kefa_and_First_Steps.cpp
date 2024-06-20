#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    int state = -1;
    vector<int> v(n);
    cin >> v[0];
    int maxCurr = 1, cnt = 1;
    for(int i=1; i<n; i++){
    	cin>>v[i];
    	if(v[i] < v[i-1]){
    		maxCurr = max(maxCurr, cnt);
    		cnt = 0;
    	}
    	cnt++;
    	maxCurr = max(maxCurr, cnt);
    }
    cout<<maxCurr;
    return 0;
}