#include <bits/stdc++.h>
using namespace std;
 
#define forn(i,a,n) for(long long i = a; i < n; i++)
#define endl "\n" 
#define int long long
 
const int MAXN = 200100;
const int MOD = 1000000007;
 
void solve() {
    //Write you code here
    int n;
    cin >> n;
    vector<int> a(n);
    forn(i,0,n) cin >> a[i];
    if(a[0]!=25){
        cout << "NO" << endl;
        return;
    }
    int c1=0;
    int c2=0;
    int c3=0;
    forn(i,0,n){
        if(a[i]==25){
            c1+=1;
        }
        else if(a[i]==50){
            if(c1==0){
                cout << "NO" << endl;
                return;
            }
            c2+=1;
            c1-=1;
        }
        else if(a[i]==100){
            if(c1!=0 && c2!=0){
                c3+=1;
                c1-=1;
                c2-=1;
                continue;
            }
            else if(c2==0 && c1>=3){
                c3+=1;
                c1-=3;
                continue;
            }
            else{
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    return;
}
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T = 1;
    //cin >> T;//Comment this out in case number of test cases are not to be taken as input.
    for(int I = 1; I <= T; I++) {
        solve(); 
    }
    return 0;
}