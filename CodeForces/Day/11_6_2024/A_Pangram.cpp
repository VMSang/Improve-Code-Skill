#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    set<char> letters;
    for (char c : s) {
        if (isalpha(c)) {
            letters.insert(tolower(c));
        }
    }

    if (letters.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
