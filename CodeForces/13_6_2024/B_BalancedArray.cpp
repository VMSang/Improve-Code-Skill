#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        if((n/2)%2 != 0){
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
            int even = 2;
            int sum1 = 0;
            for(int i=0; i<n/2; i++){
                sum1 +=even;
                v[i] = even;
                even+= 2;
            }
            int odd = 1;
            int sum2 = 0;
            for(int i=n/2; i<n-1; i++){
                sum2+=odd;
                v[i] = odd;
                odd+=2;
            }
            //guarante left == right
            v[n-1] = sum1 - sum2;
            for(int x : v){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}