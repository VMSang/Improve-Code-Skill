#include<bits/stdc++.h>
using namespace std;

int a[26],t;
string str;

int main(){
    cin>>t;
while(t--){
    cin>>str;
    int l=str.length(),ans=l;
    for(int i=0;i<l;i++){
        a[str[i]-'a']++;
        if(a[str[i]-'a']==2){
            ans-=2;
            memset(a,0,sizeof(a));
        }
    }
    cout<<ans<<endl;
    memset(a,0,sizeof(a));
}
    return 0;
}