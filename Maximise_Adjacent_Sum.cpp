#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximizeAdjacentSum(vector<int>& A) {
    int N = A.size();
    vector<int> dp(N, 0);
    dp[0] = A[0];
    dp[1] = max(A[0], A[1]);
    int max_sum = dp[1];
    for (int i = 2; i < N; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + A[i]);
        max_sum = max(max_sum, dp[i]);
    }
    return max_sum;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        cout << maximizeAdjacentSum(A) << endl;
    }
    return 0;
}