#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
   		vector<pair<int, int>> point(4);
   		for(int i=0; i<4; i++){
   			cin>>point[i].first>>point[i].second;
   		}
   		sort(point.begin(), point.end());
   		int sideLength = abs(point[0].first - point[2].first);
   		cout<<sideLength * sideLength<<endl;
    }
    return 0;
}