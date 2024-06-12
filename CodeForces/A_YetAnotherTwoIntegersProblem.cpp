#include <iostream>
using namespace std;
using ll = long long;

int main() {    
    int t; 
    cin >> t;
    while(t--) {
        int a, b; 
        cin >> a >> b;
        int cal = abs(a - b);
        
        if (cal == 0) {
            cout << 0 << endl;
        } else {
            cout << (cal + 9) / 10 << endl;
        }
    }
    return 0;
}
