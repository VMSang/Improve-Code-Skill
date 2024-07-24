#include "bits/stdc++.h"

using namespace std;

int main(){
    string a;
    cin >> a;
    
    if(a.size() <= 3){
        cout << "NO";
        return 0;
    }
    
    int i = 0;
    while(i + 1 < a.size() && !(a[i] == 'A' && a[i + 1] == 'B'))
        i++;
    i++;    
    while(i++ < a.size()){
        if(a[i] == 'B' && a[i + 1] == 'A'){
            cout << "YES" << endl;
            return 0;
        }
    }
    i = 0;
    while(i + 1 < a.size() && !(a[i] == 'B' && a[i + 1] == 'A'))
        i++;
    i++;
    while(i++ < a.size()){
        if(a[i] == 'A' && a[i + 1] == 'B'){
            cout << "YES" << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
    return 0;
}