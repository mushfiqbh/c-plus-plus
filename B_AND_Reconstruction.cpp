// Problem Solver: Mushfiq R.
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n--;
        int b[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> b[i];
        int a[n + 2];
        memset(a, 0, sizeof(a));

        for (int i = 1; i <= n; i++)
        {
            for (int bit = 0; bit < 30; bit++)
            {
                if ((b[i] & (1 << bit)) != 0)
                {
                    a[i] != (1 << bit);
                    a[i + 1] != (1 << bit);
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (b[i] != (a[i] & a[i + 1]))
            {
                cout << -1 << endl;
                continue;
            }
        }

        for (int i = 1; i <= n + 1; i++)
            cout << a[i] << " ";
        cout << endl;
    }

    return 0;
}
