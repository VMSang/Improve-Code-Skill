// JAI BAJARANG BALI
// ThinkTank30
 
// give me some sunshine, give me some rain, give me another chance to grow up once again

#include <bits/stdc++.h>

#define int long long
#define endl "\n"
#define all(s) (s).begin(), (s).end()
#define vi vector<int>
#define pb push_back
const int MOD =1e9+7;

using namespace std;

void solve(){
    string s;
    cin>>s;
    int n = s.size();
    int ind=0;
    bool f=false;int a,b;
    for (int i=n-2;i>=0;i--){
        a = (int)s[i] -'0';
         b = (int)s[i+1] - '0';
        if(a+b>=10){
            ind = i;
            f=true;
            break;
        }
    }
    if(f){
        for (int i=0;i<ind;i++){
           cout<<s[i];
        }
        cout<<a+b;
        for (int i=ind+2;i<s.size();i++){
           cout<<s[i];
        }
        cout<<endl;
    }
    else{
        cout<<(int)(s[0] + s[1] - '0' - '0');
        for (int i=2;i<n;i++){
           cout<<s[i];
        }
        cout<<endl;
    }
}
signed main (){
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int tt=1;
    cin>>tt;
    while(tt--){
    solve();
    }

}