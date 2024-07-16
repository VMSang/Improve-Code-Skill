#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,x,m;
        cin >> n >> x >> m;
        int minn=x,maxx=x;
        int l,r;
        while(m--){
            cin >> l >> r;
            if((minn<=r && minn >=l)|| (maxx >=l && maxx <=r)){
                minn=min(minn,l);
                maxx=max(maxx,r);
            }
        }
        cout << maxx-minn+1 << endl;
    }
    return 0;
}