#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int findGCD(int arr[], int N)
{
    int result = arr[0];
    for (int i = 1; i < N; i++)
    {
        result = gcd(result, arr[i]);
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int row, col;
        cin >> row >> col;

        vector<vector<int>> grid(row, vector<int>(col));

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> grid[i][j];
            }
        }

        vector<vector<int>> dp(row, vector<int>(col));

        dp[0][0] = grid[0][0];

        // Initialize the first row and first column
        for (int i = 1; i < col; i++)
        {
            dp[i][0] = gcd(dp[i - 1][0], grid[i][0]);
        }
        for (int j = 1; j < row; j++)
        {
            dp[0][j] = gcd(dp[0][j - 1], grid[0][j]);
        }

        // Fill the rest of the dp table
        for (int i = 1; i < col; i++)
        {
            for (int j = 1; j < row; j++)
            {
                dp[i][j] = max(gcd(dp[i - 1][j], grid[i][j]), gcd(dp[i][j - 1], grid[i][j]));
            }
        }

        cout << dp[col - 1][row - 1] << endl;
    }

    return 0;
}
