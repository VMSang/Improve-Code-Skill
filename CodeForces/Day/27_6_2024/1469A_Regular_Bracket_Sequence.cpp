//casework
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ts; cin>>ts;
    while(ts--){
        string s; cin>>s;
        if(s.length() %2 == 0 && s[0] != ')' && s[s.length() -1] != '('){
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
   }
    return 0;
}

//greedy
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int ts; cin >> ts;
//     while (ts--) {
//         string s; cin >> s;
//         int n = s.length();
//         int half = s.length() / 2 - 1;

//         for (int i = 0; i < n; i++) {
//             if (s[i] == '?') {
//                 if (half > 0) {
//                     half--;
//                     s[i] = '(';
//                 } else {
//                     s[i] = ')';
//                 }
//             }
//         }

//         int balance = 0, minBal = 0;
//         for(int i=0; i<n; i++){
//             if(s[i] == '('){
//                 balance++;
//             } else {
//                 balance--;
//             }
//             minBal = min(minBal, balance);
//         }

//         if(balance == 0 && minBal >= 0){
//             cout<<"YES\n";
//         } else {
//             cout<<"NO\n";
//         }
//     }
//     return 0;
// }