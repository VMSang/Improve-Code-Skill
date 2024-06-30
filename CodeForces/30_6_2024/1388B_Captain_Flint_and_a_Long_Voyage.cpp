//cách chuyển hệ 2->10 nguoclai
//đặc biệt: từ 0 đến 7 dùng ít hơn 4 bit, số 8 và 9 dùng cả 4 bit
/*
cần ít nhất 1 chữ số 8, nếu không chỉ cần dính ít nhất một chữ số qua trái thì 9 là sai
998: 1001 1001 1001 chỉ cần n = 4
988: 1001 1000 1000 chỉ cần n = 5
(n+3)/4 (cộng TỐI Đa 3)
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int ts; cin >> ts;
	while (ts--) {
		int n; cin >> n;
		int digit_8 = (n + 3) / 4; //n/4
		for (int i = 0; i < n - digit_8; i++) cout << 9;
		for (int i = 0; i < digit_8; i++) cout << 8;
		cout<<endl;
	}
	return 0;
}