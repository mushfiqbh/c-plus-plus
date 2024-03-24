// Copyright: Mushfiq R.
#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, total = 0;
        cin >> n >> k;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            total += arr[i];
        }

        long long sum = 0, maxx = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum < 0)
            {
                sum = 0;
            }
            maxx = max(maxx, sum);
        }

        long long top = 1;
        for (int i = 0; i < k; i++)
        {
            top = (top * 2) % MOD;
        }

        long long answer = (maxx * (top - 1)) % MOD;
        long long maxsum = (answer + total) % MOD;

        if (maxsum < 0)
        {
            maxsum += MOD;
        }

        cout << maxsum << endl;
    }

    return 0;
}
