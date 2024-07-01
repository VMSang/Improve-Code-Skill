#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        if (n % 2 == 1) {
            cout << 7;
            n -= 3;
        }

        while (n > 0) {
            cout << 1;
            n -= 2;
        }

        cout << endl;
    }

    return 0;
}
