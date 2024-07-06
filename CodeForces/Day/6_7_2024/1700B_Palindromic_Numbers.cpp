#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define newLine '\n'

void FAST () { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); }


string subtract (string s , string t) {
    string ans = "";
    int n1 = s.size() , n2 = t.size();
    reverse(s.begin() , s.end());
    reverse(t.begin() , t.end());
    int carry = 0;
    for (int i = 0; i < n2; i++) {
        int sub = ((s[i] - '0') - (t[i] - '0') - carry);
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        } else {
            carry = 0;
        }
        ans.push_back(sub + '0');
    }
    for (int i = n2; i < n1; i++) {
        int sub = ((s[i] - '0') - carry);
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else {
            carry = 0;
        }
        ans.push_back(sub + '0');
    }
    reverse(ans.begin() , ans.end());
    return ans;
}

string fill (char val , int times) {
    string ans = "";
    for (int i = 0; i < times; i++) {
        ans += val;
    }
    return ans;
}

int main () {
    FAST();

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        string ref;
        if (s[0] == '9') {
            ref = fill('1' , n + 1);
        } else {
            ref = fill('9' , n);
        }

        int no_leading = -1;
        string ans = subtract(ref , s);

        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] != '0') {
                no_leading = i;
                break;
            }
        }

        if (no_leading == -1) {
            cout << 0 << newLine;
        } else {
            cout << ans.substr(no_leading) << newLine;
        }
    }
}