#include <iostream>
#include <vector>
using namespace std;

int lcs(string X, string Y, int m, int n) {
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (X[i - 1] == Y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    int len = dp[m][n];
    return len;
}

int main() {
    string computer = "computer";
    string items[] = {"hairbrush", "keys", "phone", "cup"};

    int numItems = sizeof(items) / sizeof(items[0]);
    int maxLCS = 0;
    string destroyedItem;

    for (int i = 0; i < numItems; ++i) {
        int len = lcs(computer, items[i], computer.size(), items[i].size());
        if (len > maxLCS) {
            maxLCS = len;
            destroyedItem = items[i];
        }
    }

    cout << "The item that will be destroyed first: " << destroyedItem << endl;
    return 0;
}
