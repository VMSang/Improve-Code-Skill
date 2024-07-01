#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase; cin>>testCase;
    while(testCase--){
 		int n, k; cin>>n>>k;

 		long long cf = (n+k-1) / k;
 		long long s = cf*k;

 		cout<<(s+n-1)/n<<endl;
    }
    return 0;
}