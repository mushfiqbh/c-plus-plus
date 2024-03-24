#include <iostream>
#include <string>
#include <cctype>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string a = "";
    string s;
    getline(cin, s);

    for (char c : s) {
        if (islower(c)) {
            a += c;
        }
    }

    set<char> st(a.begin(), a.end());
    cout << st.size() << endl;
    return 0;
}
