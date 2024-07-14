#include<bits/stdc++.h>
#define FAST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mnVal long long min_neg = INT64_MIN;
using namespace std;

int main() {
    FAST
    int t;
    cin >> t;

    while (t--) {
     int n;cin>>n;
     int ans=0;
     while(n--){
        int a,b;
        cin>>a>>b;
        if(a>b)ans++;
     }
        cout<<ans<<"\n";

    }
    return 0;
}
