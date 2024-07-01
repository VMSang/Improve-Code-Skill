#include <bits/stdc++.h>
using namespace std;

int main() {    
	int n, t; cin>>n>>t;
	string s; cin>>s;
	pair<int, char> p;
	vector<pair<int, char>> v;
	while(t--){
		for(int i=0; i<n; i++){
			if (s[i] == 'B')
				v.push_back(p = make_pair(1, 'B'));
			else
				v.push_back(p = make_pair(0, 'G'));
		}

		for(int i=0; i<n - 1; i++){
			if(v[i] > v[i+1]){
				swap(v[i], v[i+1]);
				i++;
			}
		}

		for(int i=0; i<n; i++){
			s[i] = v[i].second;
		}
	}	
	for(int i=0; i<n; i++){
		cout<<v[i].second;
	}
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, t;
//     cin >> n >> t;
//     string s;
//     cin >> s;

//     while (t--) {
//         for (int i = 0; i < n - 1; i++) {
//             if (s[i] == 'B' && s[i + 1] == 'G') {
//                 swap(s[i], s[i + 1]);
//                 i++; // Skip the next position to avoid rechecking the swapped pair
//             }
//         }
//     }

//     cout << s << endl;
//     return 0;
// }

