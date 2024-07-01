#include <iostream>

int main() {
    long n;
    std::cin >> n;
    long best = 0, current = 0, last = 0;
    while (n--) {
        long x;
        std::cin >> x;
        if (x > last) {
            ++current;
        } else {
            current = 1;
        }
        last = x;
        best = (current > best) ? current : best;
    }

    std::cout << best << std::endl;

    return 0;
}
