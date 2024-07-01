#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    stack<char> st; // Use a stack to track characters

    for (char c : s) {
        if (!st.empty() && st.top() != c) { // Check for adjacent 1 and 0
            st.pop();  // Remove the pair
        } else {
            st.push(c); // Add the character to the stack
        }
    }

    cout << st.size() << endl; // Remaining characters in the stack
    return 0;
}
