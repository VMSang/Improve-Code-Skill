//để ý giới hạn dữ liệu
#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase; cin>>testCase;
    while(testCase--){
 		long long a,b; cin>>a>>b;

 		if(b == 1) cout<<"NO"<<endl;
 		else {
 			cout<<"YES"<<endl;
 			cout<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;
 		}
    }
    return 0;
}