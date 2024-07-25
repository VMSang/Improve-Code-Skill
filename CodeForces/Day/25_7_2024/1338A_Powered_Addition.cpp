#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n ;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int curr=0;
        int temp=a[0];
        for(int i=1;i<n;i++){
            temp=max(temp,a[i]);
            curr=max(curr,abs(a[i]-temp));
        }
        if(curr==0) cout << 0 << endl;
        else{
            int ans=0;
            for(int i=0;i<62;i++){
                curr-=pow(2,i);
                if(curr <= 0) {
                    ans=i+1;
                    break;
                }
            }
            cout << ans << endl;
        }
        

    }
 }