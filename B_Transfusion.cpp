// Author: Mushfiq R.
#include <bits/stdc++.h>
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
        ll n, odd = 0, even = 0;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (i % 2 == 0)
            {
                even += x;
            }
            else
            {
                odd += x;
            }
        }

        ll sum = even + odd;
        if (sum % n != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        ll t1 = (sum / n) * ((n + 1) / 2); // 4
        ll t2 = (sum / n) * (n / 2); // 2

        cout << (even == t1 && odd == t2 ? "YES" : "NO") << endl;
    }

    return 0;
}
