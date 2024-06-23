#include <iostream>
#include <cmath>

using namespace std;

long long calculateTrickySum(long long n) {
    // Tính tổng của dãy số từ 1 đến n
    long long sum = n * (n + 1) / 2;
    
    // Trừ đi 2 lần giá trị của mỗi lũy thừa của 2 nhỏ hơn hoặc bằng n
    long long powerOfTwo = 1;
    while (powerOfTwo <= n) {
        sum -= 2 * powerOfTwo;
        powerOfTwo *= 2;
    }
    
    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << calculateTrickySum(n) << endl;
    }
    return 0;
}
