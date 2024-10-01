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

        ll n, k, res = 0;
        cin >> n >> k;

        if (k == 1)
        {
            cout << n << endl;
        }
        else
        {
            while (n)
            {
                res += n % k;
                n /= k;
            }

            cout << res << endl;
        }
    }

    return 0;
}
