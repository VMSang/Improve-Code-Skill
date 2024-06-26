// #include <bits/stdc++.h>
// using namespace std;


// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m; cin>>n>>m;
//     int idx = 0, Max = INT_MIN;

//     for(int i=1; i<=n; i++){
//     	int a; cin>>a;

//     	if(ceil((double)a/m) >= Max){
//     		Max = ceil((double)a/m);
//     		idx = i;
//     	}
//     }

//     cout<<idx;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m; cin >> n >> m;
	queue<pair<int, int>> q;

	for (int i = 1; i <= n; i++) {
		int candi; cin >> candi;
		q.push({i, candi});
	}

	int lastChild = 0;

	while(!q.empty()){
		auto current = q.front();
		q.pop();

		current.second -= m;

		if(current.second > 0){
			q.push(current);
		}

		lastChild = current.first;
	}

	cout<<lastChild;
	return 0;
}