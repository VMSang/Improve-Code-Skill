#include <bits/stdc++.h>
using namespace std;

int main() {
    int numSoldiers;
    cin >> numSoldiers;

    int currentSoldier = 0;
    int minSoldier = 101, maxSoldier = 0;
    int minPos = 100, maxPos = 0;

    for (int k = 0; k < numSoldiers; ++k) {
        cin >> currentSoldier;
        if (currentSoldier > maxSoldier) {
            maxPos = k;
            maxSoldier = currentSoldier;
        }
        if (currentSoldier <= minSoldier) {
            minPos = k;
            minSoldier = currentSoldier;
        }
    }

    int output = maxPos + (numSoldiers - 1 - minPos);
    if (minPos < maxPos) {
        --output;
    }

    cout << output << "\n";

    return 0;
}
