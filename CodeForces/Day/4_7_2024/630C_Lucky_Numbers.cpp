#include <iostream>
#define ll long long

using namespace std;

int main() {
	int x;
	cin >> x;
	ll bs = 1, sum = 0;
	for (int i = 1; i <= x; i++) {
		bs*=2;
		sum += bs;
	}
	cout << sum;
	return 0;
}