#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

bool palindrome(string s) {
    string rev = "";
    for (char c : s) {
        rev = c + rev;
    }
    return (rev == s);
}

long long subs(string s) {
    unordered_set<int> lens;
    long long summ=0;
    int n = s.length();
    for (int i = 0; i <=n; i++) {
        for (int j = i + 1; j <= n; j++) {
            string ss = s.substr(i, j -i);
            int len = ss.length();
            if (!palindrome(ss) && lens.count(len) == 0) {
               summ += len;
               lens.insert(len);
            }
        }
    }
    return summ;
}

int main() {
    long long t, n, q;
    string s;

    cin >> t;
    while (t--) {
        cin >> n >> q;
        cin >> s;
        while (q--) {
            int l, r;
            cin >> l >> r;
            long long result = subs(s.substr(l - 1, r - l + 1));
            cout << result << endl;
        }
    }

    return 0;
}
