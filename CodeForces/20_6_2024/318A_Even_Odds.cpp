#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k; cin>>n>>k;
    if(k <= (n+1)/2){
    	cout<< k + k - 1;
    } else {
    	long long relative_k = k - (n+1)/2;
    	cout<< 2 * relative_k;
    }
    return 0;
}