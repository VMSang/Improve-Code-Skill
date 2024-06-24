#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCase; cin>>testCase;
    while(testCase--){
 		long long a,b,c,d; cin>>a>>b>>c>>d;

 		long long timeSpent = 0;

 		bool flag = 0;
 		if(c <= d){
 			timeSpent = -1;
 			flag = 1;
 		}

 		if(b >= a){
 			timeSpent = b;
 			flag = 1;
 		}

 		if(flag == 0){
 			long long cycles = ceil((a-b)/(double)(c-d));
 			timeSpent = b + c * cycles;
 		}

 		cout<<timeSpent<<endl;
    }
    return 0;
}