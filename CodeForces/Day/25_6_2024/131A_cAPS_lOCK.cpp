//cac ham is/to uper/lower đều truyền vào char 
//trả về 0/1 hoạc giá trị chuyển đồ 
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s; cin >> s;

	string t = s.substr(1, s.size() - 1);
	char c = s[0];

	bool flag = 1;
	for (int i = 1; i < s.size(); i++) {
		if (islower(s[i])) flag = 0;
	}

	if (flag == 1) {
		transform(s.begin() + 1, s.end(), s.begin() + 1, ::tolower);
		if (isupper(s[0])) {
			s[0] = tolower(s[0]);
			cout << s;
		} else {
			s[0] = toupper(s[0]);
			cout << s;
		}
	} else {
		cout << s;
	}
	return 0;
}