#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }   
    int left = 0, right = n-1;
    int serejaan = 0, dima = 0;
    bool serejaanF = true;

    while(left <= right){
        if(serejaanF){
            if(v[left] > v[right]){
                serejaan+= v[left];
                left++;
            } else {
                serejaan+= v[right];
                right--;
            }
        } else {
            if(v[left] > v[right]){
                dima+= v[left];
                left++;
            } else {
                dima+= v[right];
                right--;
            }
        }
        serejaanF = !serejaanF;
    }
    cout<<serejaan <<" "<<dima;
    return 0;
}