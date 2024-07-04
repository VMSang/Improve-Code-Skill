//mp[u] tên trạm
//first lần đầu tiên trạm xuất hiện
//second lần cuối "
//nếu không dùng pair thì không biết được trước đó đã xuất đi qua trạm này hay chưa
//vd ở q 5
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ts; cin>>ts;
    while(ts--){
 		int n, k; cin>>n>>k;
 		map<int, pair<int,int>> mp;
 		for(int i=0; i<n; i++){
 			int u; cin>>u;
 			if(!mp.count(u)){
 				mp[u].first = i;
 				mp[u].second = i;
 			} else {
 				mp[u].second = i;
 			}
 		}
 		for(int i=0; i<k; i++){
 			int a,b; cin>>a>>b;
 			if(!mp.count(a) or !mp.count(b) or mp[a].first > mp[b].second) {
            cout << "NO\n"; //equals = 0 = wrong
        }
        else cout << "YES\n";
 		}
    }
    return 0;
}