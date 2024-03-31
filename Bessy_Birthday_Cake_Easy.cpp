#include <bits/stdc++.h>
using namespace std;

#define int long long;

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        // Use a vector instead of an array
        vector<int> arr(x);
        for (int i = 0; i < x; i++) {
            cin >> arr[i];
        }

        // Calculate the number of consecutive pairs with a difference of 2
        int consecutivePairs = 0;
        for (int i = 1; i < x; i++) {
            if (arr[i] - arr[i - 1] == 2) {
                consecutivePairs++;
            }
        }

        // Check if the last and first elements have a difference of 2
        if (x >= 2 && (arr[x - 1] - arr[0] + 2) % n == 0) {
            consecutivePairs++;
        }

        // Calculate the final answer
        int ans = x - 2 + consecutivePairs;
        cout << ans << endl;
    }
    return 0;
}
