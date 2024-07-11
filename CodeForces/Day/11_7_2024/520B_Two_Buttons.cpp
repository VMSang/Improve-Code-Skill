#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

#ifndef ONLINE_JUDGE
#define dbg(...) cerr << __LINE__ << ": [", _DEBUG_UTIL_::printer(#__VA_ARGS__, __VA_ARGS__)
#define dbgArr(arr, n) cerr << __LINE__ << ": [", _DEBUG_UTIL_::printerArr(#arr, arr, n)
#else
#define dbg(x...)
#define dbgArr(arr, n)
#endif

#define Ahmed_Jamal ios::sync_with_stdio(0); cout.tie(0); cin.tie(0);
#define ll long long
#define el '\n'
#define pb push_back

void FOI(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w" , stdout);
#endif
}

ll BFS(ll n, ll m) {
    vector<int> len(100009, -1);
    queue<pair<int, int>> q;
    q.push({n, 0});
    len[n] = 0;
    
    while (!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();
        int cur = p.first, dep = p.second;

        if (cur == m) {
            return dep;
        }

        if (cur * 2 < 100009 && len[cur * 2] == -1) {
            q.push({cur * 2, dep + 1});
            len[cur * 2] = dep + 1;
        }
        if (cur - 1 >= 0 && len[cur - 1] == -1) {
            q.push({cur - 1, dep + 1});
            len[cur - 1] = dep + 1;
        }
    }
    return -1;  // In case there's no possible way (which theoretically shouldn't happen with valid input)
}

void code() {	
    ll n, m;
    cin >> n >> m;
    if (n >= m) {
        cout << n - m << el;
    } else {
        cout << BFS(n, m) << el;
    }
}

int main() {
    Ahmed_Jamal
    FOI();
    int t = 1;
    // cin >> t;
    while (t--) {
        code();
    }
    return 0;
}
