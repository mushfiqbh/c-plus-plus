#include <iostream>
using namespace std;

bool isprime(int n) {
    if (n <= 3) return true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin >> n;

    for (int i = 4; i <= n / 2; ++i) {
        if (!isprime(i) && !isprime(n - i)) {
            cout << i << ' ' << n - i;
            break;
        }
    }

    return 0;
}