#include<bits/stdc++.h>
#define ii pair<int, int>
#define ll pair<long long, long long>
#define fi first
#define se second
#define pb push_back
using namespace std;
const int mod[2] = {1000000007, 998244353};
const int N = 1e5 + 1;
const string NAME = "";
const int lim = 2147483647;
//const unsigned int lim = 4294967295;
//const long long lim = 9223372036854775807;
//const unsigned long long lim = 18446744073709551615;
const int mset = 0x3f;
const double pi = acos(-1);
int t = 1;

void solve(){
    int n;
    string s;
    cin >> n >> s;
    queue<string> q;
    string t = "";
    s = "$" + s;
    for(int i = 1; i <= n; ++i){
        if(s[i] != 'W')
            t += s[i];
        else{
            if(!t.empty()){
                q.push(t);
                t = "";
            }
        }
    }
    if(!t.empty())
        q.push(t);
    while(!q.empty()){
        t = q.front();
        q.pop();
        int B = 0, R = 0;
        for(auto c : t){
            if(c == 'B')
                ++B;
            else ++R;
        }
        if(min(B, R) == 0){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    if(fopen((NAME + ".inp").c_str(), "r")){
        freopen((NAME + ".inp").c_str(), "r", stdin);
        freopen((NAME + ".out").c_str(), "w", stdout);
    }

    cin >> t;
    while(t--)
        solve();
}
