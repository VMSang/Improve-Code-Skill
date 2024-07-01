#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Initialize variables to store the best solution found
        int best_c1 = -1, best_c2 = -1;
        int min_difference = n; // Initialize with a large value

        // Iterate over possible values of c2
        for (int c2 = 0; c2 <= n / 2 + 1; ++c2) {
            int c1 = n - 2 * c2;
            int difference = abs(c1 - c2);

            // Check if this is a better solution
            if (difference < min_difference) {
                min_difference = difference;
                best_c1 = c1;
                best_c2 = c2;
            }
        }

        // Output the best solution found
        cout << best_c1 << " " << best_c2 << endl;
    }

    return 0;
}
