#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string n;
        cin >> n;

        // Calculate initial sum and count of 2s and 3s
        long long initial_sum = 0;
        int c2 = 0, c3 = 0;
        for (char ch : n) {
            int digit = ch - '0';
            initial_sum += digit;
            if (digit == 2) c2++;
            if (digit == 3) c3++;
        }

        // Calculate the target sum modulo 9
        long long target = (9 - (initial_sum % 9)) % 9;

        // Check if it's possible to reach the target sum
        bool possible = false;
        for (int b = 0; b <= c3; ++b) {
            // Calculate the residual sum after replacing b 3s with 9s
            long long residual = (target - 6 * b) % 9;
            if (residual < 0) residual += 9;

            // Check if we can replace enough 2s with 9s to reach the residual
            long long a = (residual * 5) % 9;  // Inverse of 2 mod 9 is 5
            if (a <= c2) {
                possible = true;
                break;
            }
        }

        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}