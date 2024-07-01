#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    long t;
    cin >> t; // Đọc số lượng test case

    while (t--) {
        long n;
        cin >> n; // Đọc độ dài chuỗi
        string u, v;
        cin >> u >> v; // Đọc hai chuỗi u và v

        bool res = true;
        for (long p = 0; p < n; p++) {
            if (u[p] == v[p]) {
                continue; // Nếu ký tự ở vị trí p của u và v giống nhau, tiếp tục vòng lặp
            } else if ((u[p] == 'G' && v[p] == 'B') || (u[p] == 'B' && v[p] == 'G')) {
                continue; // Nếu u[p] là 'G' và v[p] là 'B', hoặc ngược lại, tiếp tục vòng lặp
            } else {
                res = false; // Nếu không thỏa các điều kiện trên, đánh dấu kết quả là false
                break; // Thoát khỏi vòng lặp
            }
        }

        cout << (res ? "YES" : "NO") << endl; // In ra kết quả "YES" hoặc "NO"
    }

    return 0;
}
