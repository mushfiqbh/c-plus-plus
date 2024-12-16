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
        ll n;
        cin >> n;
        ll arr[n], arr2[n + 1] = {0};

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (ll i = 0; i < n; i++)
        {
            arr2[arr[i]]++;
        }

        bool cng = 1;
        ll ans = 0;

        for (ll i = 0; i <= n; i++)
        {
            if (arr2[i] == 0)
            {
                ans = i;
                break;
            }
            else if (arr2[i] == 1)
            {
                if (cng)
                {
                    cng = 0;
                }
                else
                {
                    ans = i;
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
