#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int result = -1; // Kết quả mặc định là -1, tức là không thể biến đổi
    
    if (m % n == 0) { // Nếu m chia hết cho n
        result = 0;
        int d = m / n;
        
        // Kiểm tra số lần chia cho 2
        while (d % 2 == 0) {
            d /= 2;
            result++;
        }
        
        // Kiểm tra số lần chia cho 3
        while (d % 3 == 0) {
            d /= 3;
            result++;
        }
        
        // Nếu d khác 1 sau khi chia hết cho 2 và 3
        if (d != 1) {
            result = -1; // Không thể biến đổi m thành n
        }
    }
    
    cout << result << endl;
    
    return 0;
}
