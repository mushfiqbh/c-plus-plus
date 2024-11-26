// Author: Mushfiq R.
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define vsort(v) sort(v.begin(), v.end())
#define fastread() (ios_base::sync_with_(false), cin.tie(NULL));
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll ans = 0;
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i += 2)
            {
                ans = max(ans, a[i + 1] - a[i]);
            }
        }
        else
        {
            ans = 1e18;
            for (int i = 0; i < n; i += 2)
            {
                ll res = 0;
                for (int j = 0; j < n; j += 2)
                {
                    if (j == i)
                    {
                        j--;
                        continue;
                    }
                    res = max(res, a[j + 1] - a[j]);
                }
                ans = min(ans, res);
            }
        }
        ans = max(ans, 1LL);
        cout << ans << endl;
    }

    return 0;
}

// int64_t best = INT64_MAX;

// for (int solo = 0; solo < N; solo += 2)
// {
//     if (0 < solo && solo < N - 1 && A[solo + 1] - A[solo] == 1 && A[solo] - A[solo - 1] == 1)
//         continue;

//     int64_t most = 0;

//     for (int i = 0; i < solo; i += 2)
//         most = max(most, A[i + 1] - A[i]);

//     for (int i = solo + 1; i < N; i += 2)
//         most = max(most, A[i + 1] - A[i]);

//     best = min(best, most);
// }

// best = max(best, INT64_C(1));