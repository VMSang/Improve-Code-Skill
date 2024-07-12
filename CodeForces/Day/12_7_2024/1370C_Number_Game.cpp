// một số có dạng n = 2^k với k là nguyên thì chỉ có duy nhất 1 là ước lẻ
#include<bits/stdc++.h>
using namespace std;

bool ok(int n){
    int ans = 0;
    for(int i = 3;i * i <=n;i+=2){
        if( n % i==0) ans++;
        if(i * i == n)break;
        if( n % i==0) ans++;
        
    }
    return (ans >= 2 ? true: false);
}
void solve(){
    int n;
    cin >> n;
    if(n==1)cout <<"FastestFinger\n";
    else if(n==2)cout <<"Ashishgup\n";
    else if(n%2==1) cout <<"Ashishgup\n";
    else{
        if(log2(double(n)) ==int(log2(n)))cout << "FastestFinger\n";
        else{
            if(n%4==0) cout << "Ashishgup\n";
            else if (ok(n)) {
            	cout << "Ashishgup\n";
            }else{
                cout << "FastestFinger\n";
            }
}
}
    }


int main(){
    int t;cin >> t;
    while(t--)solve();

}