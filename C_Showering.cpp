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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, s, m;
        cin >> n >> s >> m;
        ll prev(0);
        bool res(false);
        for (ll p = 0; p < n; p++)
        {
            ll left, right;
            cin >> left >> right;
            if (prev + s <= left)
            {
                res = true;
            }
            prev = right;
        }

        if (prev + s <= m)
        {
            res = true;
        }

        cout << (res ? "YES" : "NO") << endl;
    }

    return 0;
}