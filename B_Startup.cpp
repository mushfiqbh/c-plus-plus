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

    vector<ll> report;

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        unordered_map<int, vector<int>> bcosts;

        for (int i = 0; i < k; ++i)
        {
            int bi, ci;
            cin >> bi >> ci;
            bcosts[bi].push_back(ci);
        }

        vector<ll> brands;
        for (const auto &entry : bcosts)
        {
            auto brand = entry.first;
            auto costs = entry.second;
            sort(costs.rbegin(), costs.rend());
            ll total = 0;
            for (int cost : costs)
            {
                total += cost;
            }
            brands.push_back(total);
        }

        sort(brands.rbegin(), brands.rend());

        ll maxx = 0;
        for (int i = 0; i < min(n, (int)brands.size()); i++)
        {
            maxx += brands[i];
        }

        report.push_back(maxx);
    }

    for (ll res : report)
    {
        cout << res << endl;
    }

    return 0;
}
