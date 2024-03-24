#include <iostream>
#include <string>
#include <algorithm>
using namespace std;    

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;

    string hello = "hello";
    int ptr = 0;

    for (char c : s) {
        if (c == hello[ptr]) {
            ptr++;
            if (ptr == hello.size()) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
