#include <iostream>

int main() {
    long t; 
    std::cin >> t;
    while (t--) {
        long n; 
        std::cin >> n;
        long cnt = 0;
        for (long p = 0; p < 2 * n; p++) {
            long x; 
            std::cin >> x;
            cnt += (x % 2);
        }
        std::cout << (cnt == n ? "Yes" : "No") << std::endl;
    }

    return 0;
}
