#include <iostream>
using namespace std;

bool check(int r, int g, int b, int w) {
    return (r % 2 + g % 2 + b % 2 + w % 2 <= 1);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int r, g, b, w;
        cin >> r >> g >> b >> w;
        if (check(r, g, b, w)) {
            cout << "Yes" << endl;
        } else if (r > 0 && g > 0 && b > 0 && check(r - 1, g - 1, b - 1, w + 1)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
