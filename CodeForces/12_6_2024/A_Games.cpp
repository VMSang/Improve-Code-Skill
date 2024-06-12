#include <bits/stdc++.h>
using namespace std;

int main() {    
    int n; cin>>n;

    vector<pair<int, int>> teams(n);
    for(int i=0; i<n; i++){
    	cin>>teams[i].first>>teams[i].second;
    }

    vector<int> hFreq(101, 0);
    vector<int> gFreq(101, 0);

    for(int i=0; i<n; i++){
    	hFreq[teams[i].first]++;
    	gFreq[teams[i].second]++;
    }

    int cnt = 0;
    for(int i=0; i<n; i++){
    	cnt += gFreq[teams[i].first];
    }
    cout<<cnt;
    return 0;
}
