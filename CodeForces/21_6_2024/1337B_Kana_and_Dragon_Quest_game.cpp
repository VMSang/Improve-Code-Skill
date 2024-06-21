// từ 21 trở về sau khi chia cho 2 cộng 10 không còn tăng máu quái vật
#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase; cin>>testCase;
    while(testCase--){
 		int x, n, m; cin>>x>>n>>m;
 		while(n>0 && x > 20){
 			x = x/2 + 10;
 			n--;
 		}
 		while(m>0 && x > 0){
 			x -= 10;
 			m--;
 		}

 		if(x <= 0){
 			cout<<"YES"<<endl;
 		} else {
 			cout<<"NO"<<endl;
 		}
    }
    return 0;
}