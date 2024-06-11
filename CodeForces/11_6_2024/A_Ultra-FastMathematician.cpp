#include <iostream>
#include <string>

int main() {
    std::string a, b;
    std::cin >> a >> b;
    std::string result;

    for (size_t i = 0; i < a.size(); ++i) {
        // If the digits are different, append '1' to result, otherwise append '0'
        if (a[i] != b[i]) {
            result += '1';
        } else {
            result += '0';
        }
    }

    std::cout << result << std::endl;
    return 0;
}
