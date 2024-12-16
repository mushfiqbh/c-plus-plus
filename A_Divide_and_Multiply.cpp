// Author: Mushfiq R.
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
#define vsort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<int>())
#define fastIO() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {

        ll n;
        cin >> n;
        ll mx = 0, res = 0, cnt = 0;

        for (ll p = 0; p < n; p++)
        {
            ll x;
            cin >> x;
            while (x % 2 == 0)
            {
                x /= 2;
                ++cnt;
            }
            if (x > mx)
            {
                res += mx;
                mx = x;
            }
            else
            {
                res += x;
            }
        }

        for (ll p = 0; p < cnt; p++)
        {
            mx *= 2;
        }
        res += mx;

        cout << res << endl;
    }

    return 0;
}
