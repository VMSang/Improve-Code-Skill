//sort sau đó lấy đồng lớn nhất trước rồi giảm dần xuống 
//đến khi lớn hơn một nữa
#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    int sumCoinVal = 0;
    vector<int> v(n);
    for(int &x : v){
    	cin>>x;
    	sumCoinVal += x;
    }

    sort(v.begin(), v.end());

    int cntCoin = 0, currSumCoinVal = 0;
    while(currSumCoinVal <= sumCoinVal / 2){
    	cntCoin++;
    	currSumCoinVal += v[n - cntCoin];
    }

    cout<<cntCoin;
    return 0;
}