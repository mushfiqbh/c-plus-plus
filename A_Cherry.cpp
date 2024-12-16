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
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll maxx = 0;

        // Iterate over all subarrays
        for (ll i = 0; i < n; i++)
        {
            ll minVal = LLONG_MAX, maxVal = LLONG_MIN;
            for (ll j = i; j < n; j++)
            {
                // Dynamically update min and max
                minVal = min(minVal, arr[j]);
                maxVal = max(maxVal, arr[j]);

                // Calculate product for the current subarray
                ll product = minVal * maxVal;

                // Update the maximum product
                maxx = max(maxx, product);
            }
        }

        cout << maxx << endl;
    }

    return 0;
}