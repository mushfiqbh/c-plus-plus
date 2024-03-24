#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string sp(n - 1, ' ');
    for (int i = 1; i <= n; i++) {
        cout << sp;
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << "\n";
        sp.pop_back();
    }
    return 0;
}