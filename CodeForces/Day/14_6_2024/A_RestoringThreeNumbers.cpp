#include <bits/stdc++.h>
using namespace std;

int main() {
    const long n = 4;
    vector<long> a(n);

    // Đọc dữ liệu vào vector
    for (long p = 0; p < n; p++) {
        scanf("%ld", &a[p]);
    }

    // Sắp xếp vector
    sort(a.begin(), a.end());

    // In kết quả
    printf("%ld %ld %ld\n", a[n - 1] - a[0], a[n - 1] - a[1], a[n - 1] - a[2]);

    return 0;
}
