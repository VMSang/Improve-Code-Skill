#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase; cin>>testCase;
    while(testCase--){
    	long long n; cin>>n;
    	vector<int> v(n);
    	long long sum = 0, cnt1 = 0;

    	for(int& x : v){
    		cin>>x;
    		sum+=x;
    		if(x == 1) cnt1++;
    	}

    	cout<<((sum < cnt1 + n || n == 1) ? "NO\n" : "YES\n");
    }
    return 0;
}