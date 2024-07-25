#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, long long int> m;
    vector<pair<string, long long int>> rounds;
    string s;
    long long int score;

    for (int i = 0; i < n; i++) {
        cin >> s >> score;
        m[s] += score;
        rounds.push_back(make_pair(s,score));
    }

    string winner;
    long long int maxi = -INT_MAX;
    for (auto it = m.begin(); it != m.end(); it++) {
        maxi = max(maxi, it->second);
    }

    vector<string> possible_winners;
    for(auto it=m.begin();it!=m.end();it++){
		if(it->second == maxi){
			possible_winners.push_back(it->first);
		} 
	}
    m.clear();

    for (auto it:rounds) {
		m[it.first] += it.second;
		
        if (m[it.first] >= maxi) {
			for (auto w: possible_winners) {
				if (it.first == w) {
					cout << it.first << endl;
					return 0;
				}
			}
		}
	}
}