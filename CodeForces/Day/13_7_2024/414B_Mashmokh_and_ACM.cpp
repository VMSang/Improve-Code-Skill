#include <bits/stdc++.h>
#define ll long long
const int MOD = 1e9 + 7;

int main() {
	int n, k; std::cin >> n >> k;
	ll sum = 0;
	std::vector<std::vector<int>> dp(k, std::vector<int>(n, 0));
	for (size_t i = 0; i < n; i++) {
		dp[0][i] = 1;
	}
	for (size_t i = 1; i < k; i++) {
		for (size_t j = 0; j < n; j++) {
			for (size_t p = j; p < n; p += j + 1) {
				dp[i][p] = (dp[i - 1][j] + dp[i][p]) % MOD;
			}
		}
	}
	for (const ll& val : dp[k - 1])
		sum += val % MOD;
	std::cout << sum % MOD;
}