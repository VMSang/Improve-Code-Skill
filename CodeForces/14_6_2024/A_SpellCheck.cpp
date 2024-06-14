#include <bits/stdc++.h>
using namespace std;

int main() {
    int Tc; cin >> Tc;
    while (Tc--) {
        int n; cin >> n;
        string s; cin >> s;
        map<char, int> mp;
        for (char c : s) mp[c]++;
        
        string target = "Timur";
        bool valid = (n == target.size());
        
        for (char c : target) {
            if (mp[c] != 1) {
                valid = false;
                break;
            }
        }
        
        cout << (valid ? "YES" : "NO") << "\n";
    }
    return 0;
}
