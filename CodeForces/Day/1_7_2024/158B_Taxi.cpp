#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int> count(5, 0);

    while(n--){
    	int team; cin>>team;
    	count[team]++;
    }

    //nhom 4, nhom 3, 2 nhom 2 == 1 chiec
    int sum_taxi = count[4] + count[3] + count[2]/2;
    //nhom 1 di chung voi cac nhom 3
    count[1] -= count[3];

    if(count[2]%2 == 1){
    	sum_taxi++;
    	//du hai cho
    	count[1] -= 2;
    }
    //cac doi 1 con lai
    //khong the xet != 0 vi co the am o if truoc do ma
    if(count[1] > 0){
    	// +3 vi chi can 1 doi la phai them 1 taxi roi
    	sum_taxi += (count[1]+3) / 4;
    }
    cout<<sum_taxi;
    return 0;
}