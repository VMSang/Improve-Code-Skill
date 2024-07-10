#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  string s;
  cin >> s;
  reverse(s.begin(), s.end());
  int n = s.size();
  for (int i = n-1; i > 0; --i) {
    if ((s[i]-'0')%2 == 0 && s[i] < s[0]) {
      swap(s[0], s[i]);
      reverse(s.begin(), s.end());
      cout << s << "\n";
      return 0;
    }
  }
  for (int i = 1; i < n; ++i) {
    if ((s[i]-'0')%2 == 0) {
      swap(s[0], s[i]);
      reverse(s.begin(), s.end());
      cout << s << "\n";
      return 0;
    }
  }
  cout << "-1\n";
  return 0;
}