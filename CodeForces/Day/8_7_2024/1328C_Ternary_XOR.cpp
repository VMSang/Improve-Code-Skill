#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ts; cin>>ts;
    while(ts--){
 		int n; cin>>n;
 		string s; cin>>s;

 		string a(n, '0'), b(n, '0');
 		for(int i=0; i<n; i++){
 			//a=[số trước i]...1000000
 			//b=[số trước i]...0[j][j]...
 			//đảm bảo a>b là nhỏ nhất, note: 0 + b[i] = b[i] = s[i] => [j] sẽ bàng cj
 			if(s[i] == '1'){
 				a[i] = '1';
 				b[i] = '0';
 				for(int j=i+1; j<n; j++){
 					b[j] = s[j];
 				}
 				break;
 			} else {
 				//c=0 => (0,0)    c=2 => (1,1)
 				//chỉ có hai cặp số trên là cho ra a,b nhỏ nhất
 				a[i] = b[i] = '0' + (s[i] - '0') / 2;
 			}
 		}

 		cout<<a<<endl<<b<<endl;
    }
    return 0;
}