#include <cstdio>

int main() {
    long t; 
    scanf("%ld", &t); // Read the number of test cases

    while (t--) {  // Loop through each test case
        long a, b, c; 
        scanf("%ld %ld %ld", &a, &b, &c);  // Read the three integers

        // Check the three conditions using logical operators
        bool res = 
            ((2 * b > c) && ((2 * b - c) % a == 0)) ||  // Condition 1
            ((2 * b > a) && ((2 * b - a) % c == 0)) ||  // Condition 2
            ((a + c) % (2 * b) == 0);                  // Condition 3

        // Print the result (YES or NO)
        puts(res ? "YES" : "NO"); 
    }

    return 0;
}
