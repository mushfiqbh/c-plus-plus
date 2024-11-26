// Problem Solver: Mushfiq R.
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define vsort(v) sort(v.begin(), v.end())
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    const int MXN = 1e5 + 5, INF = 1e9 + 7;
    int arr[MXN + 1];

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        int res = INF;
        for (int i = 1; i <= n; i++)
        {
            int cnt = 0;
            for (int j = i + 1; j <= n; j++)
            {
                cnt += (arr[j] > arr[i]);
            }
            res = min(res, cnt + (i - 1));
        }
        cout << res << endl;
    }

    return 0;
}
