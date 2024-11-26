// Author: Mushfiq R.
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define vsort(v) sort(v.begin(), v.end())
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int t;
int mat[501][501];

int check(int r, int c, int n)
{
    int res = INT_MAX;
    while (r < n && c < n)
    {
        res = min(res, mat[r][c]);
        r++;
        c++;
    }
    return res;
}

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> mat[i][j];
            }
        }

        ll ans = 0;
        int buffer = check(0, 0, n);

        if (buffer < 0)
        {
            ans += buffer;
        }
        for (int i = 1; i < n; i++)
        {
            buffer = check(0, i, n);
            if (buffer < 0)
            {
                ans += buffer;
            }

            buffer = check(i, 0, n);
            if (buffer < 0)
            {
                ans += buffer;
            }
        }

        cout << -1 * ans << endl;
    }

    return 0;
}