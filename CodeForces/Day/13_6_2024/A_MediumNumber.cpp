#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
 		int a,b,c; cin>>a>>b>>c;
 		int Max = max({a,b,c});
 		int Min = min({a,b,c});
 		int sum = a + b + c;
 		cout<<sum - Max -Min<<endl;
    }
    return 0;
}