#include <iostream>
using namespace std;

int sum_multiples_of(int x, int n) {
    int m = n / x;
    return x * m * (m + 1) / 2;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int optimal = 2;
        int optimal_sum = sum_multiples_of(2, n);

        for (int x = 3; x <= n; x++) {
            int sum_multiples = sum_multiples_of(x, n);
            if (sum_multiples > optimal_sum) {
                optimal = x;
                optimal_sum = sum_multiples;
            }
        }

        cout << optimal << endl;
    }

    return 0;
}
