#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minCoins(int n) {
    vector<int> coins = {1, 3, 6, 10, 15};
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int coin : coins) {
            if (coin <= i) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }
    return dp[n] == INT_MAX ? -1 : dp[n];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
    long long n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << minCoins(n) << endl;
    }
	

	return 0;
}