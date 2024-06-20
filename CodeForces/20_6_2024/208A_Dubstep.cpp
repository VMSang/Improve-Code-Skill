//s = abc
//s.find_first_not_of(e) : trả về 0 (a)
//s.find_last_not_of(e) : trả về 2 (c)
// sẽ trả về std::string::npos nếu không tìm thấy bất kỳ ký tự nào không thuộc tập hợp

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin>>s;
    size_t pos;

    while((pos = s.find("WUB")) != string::npos){
    	s.replace(pos, 3, " ");
    }

    //từ 0 và xóa x kí tự
    s.erase(0, s.find_first_not_of(" "));
    s.erase(s.find_last_not_of(" ") + 1);
    cout<<s;
    return 0;
}


// #include <iostream>
// using namespace std;

// int main() {
//     string line;
//     getline(cin, line);

//     string output = "";
//     int index = 0;
//     bool separator = true;

//     while (index + 2 < line.size()) {
//         if (line.substr(index, 3) == "WUB") {
//             index += 3;
//             if (!separator) {
//                 output += ' ';
//             }
//             separator = true;
//         } else {
//             output += line[index];
//             index++;
//             separator = false;
//         }
//     }

//     if (line.size() > 1 && index == line.size() - 2) {
//         output += line.substr(index, 2);
//     } else if (line.size() > 0 && index == line.size() - 1) {
//         output += line[index];
//     }

//     cout << output << endl;

//     return 0;
// }