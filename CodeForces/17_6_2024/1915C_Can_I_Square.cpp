#include <bits/stdc++.h>
using namespace std;

//số chính phương (số hình vuông)
int main() {
    int t; cin>>t;
    while(t--){
 		int n; cin>>n;
        long long sum = 0;
 		for(int i=0; i<n; i++){
            long long x; cin>>x;
            sum+=x; 	
 		}
        long long edge = sqrt(sum);
        //có những số không là số chính phương nhưng vẫn tạo được hình vuông (số 12)
        if(edge*edge < sum) edge++;
        else if(edge*edge > sum) edge--;
        if(edge * edge == sum) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}