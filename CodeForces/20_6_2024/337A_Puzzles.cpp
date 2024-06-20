#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin>>n>>m;
    vector<int> v(m);
    for(int &x : v){
    	cin>>x;
    }

    sort(v.begin(), v.end());

    int minDiff = INT_MAX;
    for(int i=0; i <= m-n; i++){
    	int diffCurr = v[i-1 + n] - v[i];
    	minDiff = min(minDiff, diffCurr);
    }

    cout<<minDiff;
    return 0;
}