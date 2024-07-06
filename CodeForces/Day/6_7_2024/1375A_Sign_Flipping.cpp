#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
        int a=(n-1)/2;
       for(int i=0;i<n;i++){
           if(i%2==0){
               v[i]=-(abs(v[i]));
           }
           else{
               v[i]=abs(v[i]);
           }
       }
 
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}