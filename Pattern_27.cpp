#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string sp(n-1, ' ');
    char c = 'A'; // start with A
    for (int i = 1; i <= n; i++) {
        cout << sp;
        for (int j = 1; j <= i; j++) {
            char ch = c - (j - 1); // update ch in the inner loop
            cout << ch; // print the current letter
        }
        c++;
        cout << "\n";
        sp.pop_back();
    }
    return 0;
}
