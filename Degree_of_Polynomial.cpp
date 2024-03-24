#include <iostream>
#include <vector>
using namespace std;

int find_highest_power(const vector<int>& coefficients) {
    int n = coefficients.size();
    while (n > 0 && coefficients[n - 1] == 0) {
        n--;
    }

    if (n == 0) {
        return -1;
    }

    return n - 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> coefficients(n);
        for (int i = 0; i < n; i++) {
            cin >> coefficients[i];
        }
        int highest_power = find_highest_power(coefficients);
        cout << highest_power << endl;
    }

    return 0;
}
