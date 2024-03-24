#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

bool monopoly(const vector<int>& pro) {
    int sum = accumulate(pro.begin(), pro.end(), 0);
    return any_of(pro.begin(), pro.end(), [sum](int x){return x > (sum - x);});
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        vector<int> pro(4);
        for (auto& x : pro) {
            cin >> x;
        }
        if (monopoly(pro)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
