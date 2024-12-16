// Time Complexity : O(n^2)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;

    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            // int s = i + j + k
            int k = s - i - j;
            if (0 <= k and k <= n)
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}