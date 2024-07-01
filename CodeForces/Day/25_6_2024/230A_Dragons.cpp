#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s, n; cin>>s>>n;
    vector<pair<int, int>> allDragons(n);

    for(int i=0; i<n; i++){
    	int x,y; cin>>x>>y;
    	allDragons[i].first = x;
    	allDragons[i].second = y;
    }

    sort(allDragons.begin(), allDragons.end());

    int i;
    for(i=0; i<n; i++){
    	if(s > allDragons[i].first){
    		s+= allDragons[i].second;
    	} else {
    		cout<<"NO";
    		return 0;
    	}
    }

    cout<<"YES";
    return 0;
}