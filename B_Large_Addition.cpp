// Problem Solver: Mushfiq R.
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string txt = to_string(n);
        int len = txt.size();
        
        string small = "01234", large = "56789";
        if (txt.find(small) != string::npos && txt.find(large) != string::npos) {
            cout << "No" << endl;
            continue;
        }
        
        bool flag = false;
        int sum = 0;
        for (int i = 0; i < len - 1; i++) {
            sum += (txt[i] - '0');
            if (txt[i] == '0') {flag = true;}
        }
        
        if (txt[len - 1] == '9' || sum == 35 || txt[0] != '1' || len % 10 == 0 || flag) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
