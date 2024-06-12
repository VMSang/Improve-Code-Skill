#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {    
	vector<int> v(3);
 	cin>>v[0]>>v[1]>>v[2];
 	sort(v.begin(), v.end());
 	int mid = v[1];
 	cout<<v[1]-v[0] + v[2]-v[1];
    return 0;
}