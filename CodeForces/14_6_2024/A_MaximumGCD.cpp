#include <bits/stdc++.h>
using namespace std;

int main() {    
    int t; cin>>t;
    while(t--){
    	int n; cin>>n;
    	cout<<n/2<<endl;
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	while(b!=0){
		int tmp=a;
		a=b;
		b=tmp%b;
	}
	return a;
}

int main() {
    int t; cin>>t;
    while(t--){
		int n; cin>>n;
		int max_gcd = 1;

		for (int a = 1; a <= n - 1; ++a) {
            int b = 2 * a;
            while (b <= n) {
                max_gcd = max(max_gcd, gcd(a, b));
                b += a;
            }
        }
        cout<<max_gcd<<endl;
    }
    return 0;
}