// Author: Mushfiq R.
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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if (n == 1)
        {
            cout << 1 << endl
                 << 1 << endl;
        }
        else if ((n + 1) / 2 != k)
        {
            cout << -1 << endl;
        }
        else if (n == 3)
        {
            cout << 3 << endl;

            for (int i = 1; i < 3; i += 1)
            {
                cout << i << " ";
            }
        }
        else
        {
            int m = n / 3;
            cout << m << endl;

            for (int i = 1; i <= m; i += 3)
            {
                cout << i << " ";
            }
        }
    }

    return 0;
}
