#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<long long> sums;
        long long sum = 0;
        for (long long i = n - 1; i >= 0; i--)
        {
            sums.push_back(sum);
            if (s[i] == '1')
            {
                sum += 1;
            }
            else
            {
                sum -= 1;
            }
        }

        sort(sums.begin(), sums.end(), greater<long long>());

        long long pre = 0, res = -1;
        for (long long i = 2; i <= n; i++)
        {
            if (i - 2 < sums.size())
            {
                pre += sums[i - 2];
                if (pre >= k)
                {
                    res = i;
                    break;
                }
            }
        }
        cout << res << endl;
    }

    return 0;
}
