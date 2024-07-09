#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    // Create a DP array and initialize with -1 (indicating impossible cuts)
    int dp[4001];
    fill(dp, dp + 4001, -1);
    dp[0] = 0; // Base case: 0 pieces for length 0

    // Iterate over all lengths from 1 to n
    for (int i = 1; i <= n; i++) {
        // Check if it's possible to cut a piece of length a, b, or c and update the dp array
        if (i - a >= 0 && dp[i - a] != -1) dp[i] = max(dp[i], dp[i - a] + 1);
        if (i - b >= 0 && dp[i - b] != -1) dp[i] = max(dp[i], dp[i - b] + 1);
        if (i - c >= 0 && dp[i - c] != -1) dp[i] = max(dp[i], dp[i - c] + 1);
    }

    // Print the maximum number of pieces
    cout << dp[n] << endl;

    return 0;
}