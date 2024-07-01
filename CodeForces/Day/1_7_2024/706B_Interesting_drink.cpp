// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);

// 	int store; cin >> store;

// 	//nhập vào giá của mỗi cửa hàng
// 	vector<int> price(store);
// 	for (int i = 0; i < store; i++) {
// 		cin >> price[i];
// 	}
// 	int maxPrice = *max_element(price.begin(), price.end());

// 	//đếm các cửa hàng có giá i
// 	vector<int> count_price(maxPrice + 1, 0);
// 	for (int i = 0; i < store; i++) {
// 		count_price[price[i]]++;
// 	}

// 	//đếm tổng các của hàng có giá từ i trở xuống
// 	vector<int> prefix_sum(maxPrice + 1, 0);
// 	for(int i=1; i <= maxPrice; i++){
// 		prefix_sum[i] = prefix_sum[i-1] + count_price[i];
// 	}

// 	int q; cin>>q;
// 	while(q--){
// 		int m; cin>>m;
// 		if(m > maxPrice){
// 			cout<<store<<endl;
// 		} else if(m <= maxPrice){
// 			cout<<prefix_sum[m]<<endl;
// 		}
// 	}


// 	return 0;
// }


//cach 2
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	vector<int> v(n);
	for (int &x : v) {
		cin >> x;
	}

	sort(v.begin(), v.end());

	int q; cin >> q;
	while (q--) {
		int x; cin >> x;
		// l có thể mua, r không thể mua
		// l = -1 để nếu không mua được cái nào thì l=-1 & r = 0 sẽ in ra 0
		int l = -1, r = n;
		while (l + 1 < r) {
			int m = (l + r) / 2;
			if (x >= v[m]) l = m;
			else r = m;
		}
		cout << r << endl;
	}

	return 0;
}