// Author: Mushfiq R.
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
#define vsort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<int>())
#define fastIO() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        int row, column;
        cin >> row >> column;
        vector<vector<int>> grid(row, vector<int>(column));
        int sum = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                char ch;
                cin >> ch;
                if (ch == '+')
                {
                    grid[i][j] = 1;
                    sum++;
                }
                else
                {
                    grid[i][j] = 0;
                }
            }
        }

        int maxx = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if (grid[i][j])
                {
                    int count = 1;
                    int d = 1;
                    while (true)
                    {
                        if (i + d < row && j + d < column && i - d >= 0 && j - d >= 0)
                        {
                            if (grid[i + d][j] + grid[i][j + d] + grid[i - d][j] + grid[i][j - d] == 4)
                            {
                                count += 4;
                                d++;
                            }
                        }
                        else
                        {
                            break;
                        }
                    }
                    maxx = max(maxx, count);
                }
            }
        }

        cout << maxx << endl;
    }

    return 0;
}