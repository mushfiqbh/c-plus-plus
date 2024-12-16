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
        ll k, n, cnt = 0;
        ll sum = 0;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<ll, ll> freq;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            x = arr[i] - i;
            freq[x]++;
        }

        for (auto i : freq)
        {
            if (i.second > 1)
            {
                cnt = i.second;
                sum = sum + ((cnt * (cnt - 1)) / 2);
            }
        }

        cout << sum << endl;
    }

    return 0;
}
