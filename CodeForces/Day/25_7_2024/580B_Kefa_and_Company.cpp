# include <bits/stdc++.h>

using namespace std;

const int q = 2e6 + 7;

pair <int , int> p[q];
long long  pr[q];

int main(){
	
	int n , d;
	cin >> n >> d;
	
	for (int i = 1; i <= n; i++){
		cin >> p[i].first >> p[i].second;
	}
	
	sort(p + 1 , p + n + 1);
	
	pr[1] = p[1].second;
	for (int i = 2; i <= n; i++){
		pr[i] = p[i].second + pr[i - 1];
	}
	
	long long w = 1 , mx = 0;
	for (int i = 1; i <= n; i++){
		if (p[i].first - p[w].first < d){
			mx = max(mx , pr[i] - pr[w - 1]);
			continue;
		}
		else{
			w++;
			i--;
		}
			
		
	}
	
	cout << mx << endl;
		
	return 0;
}