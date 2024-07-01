#include <iostream>
using namespace std;

void sao(int n){
    for(int i=0; i<n; i++){
        cout<<"#";
    }
}

void chamSao(int n){
    for(int i=0; i<n-1; i++){
        cout<<".";
    }
    cout<<"#";
    cout<<endl;
}

void saoCham(int n){
    cout<<"#";
    for(int i=0; i<n-1; i++){
        cout<<".";
    }
    cout<<endl;
}

int main() {    
    int n, m; 
    cin >> n >> m;
    int cal = n / 2 + 1;
    bool flag = true;
    for(int i = 0; i < cal; i++){
        sao(m);
        cout << endl;
        if(flag){
            if(i != cal-1) chamSao(m);
            flag = false;
        } else {
            if(i != cal-1) saoCham(m);
            flag = true;
        }
    }
    return 0;
}
