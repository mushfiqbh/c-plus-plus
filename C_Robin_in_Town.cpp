// Problem Solver: Mushfiq R.
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long
#define ld long double
#define vsort(v) sort(v.begin(), v.end())

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
        vector<int> wealth(n);
        for (int i = 0; i < n; i++)
        {
            cin >> wealth[i];
        }

        if (n <= 2)
        {
            cout << -1 << endl;
        }
        else
        {
            vsort(wealth);
            ll sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += wealth[i];
            }

            ll x = 0, unhappy = 0;
            double halfAvg = (sum + x) / (2.0 * n);

            while (unhappy <= n / 2)
            {
                unhappy = 0;
                halfAvg = (sum + x) / (2.0 * n);

                for (int i = 0; i < n; i++)
                {
                    if (wealth[i] < halfAvg)
                    {
                        unhappy++;
                    }
                }
                x++;
            }

            cout << x - 1 << endl;
        }
    }

    return 0;
}
