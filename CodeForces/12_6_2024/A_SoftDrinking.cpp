#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    int ml_per_toast = (k * l) / (n * nl);
    int lime_slices = (c * d) / n;
    int salt_grams = p / (n * np);
    
    int toasts = min({ml_per_toast, lime_slices, salt_grams});
    
    cout << toasts << endl;
    
    return 0;
}
