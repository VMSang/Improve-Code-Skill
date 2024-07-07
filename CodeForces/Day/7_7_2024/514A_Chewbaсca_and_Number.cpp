#pragma GCC optimize ("unroll-loops","O3")

#define _USE_MATH_DEFINES

#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <queue>
#include <array>
#include <cmath>
#include <map>
#include <set>

using namespace std;
using pii = pair<int, int>;
using ll = long long;

int main() {
	string str;
	cin >> str;

	char ch = str[0];
	for (auto& t : str)
		if (t > '4')
			t = '9' - t + '0';

	if (ch == '9')
		str[0] = ch;

	cout << str;

	return 0;
}