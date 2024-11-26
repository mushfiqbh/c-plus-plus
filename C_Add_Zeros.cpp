// Author: Mushfiq R.
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define vsort(v) sort(v.begin(), v.end())
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

map<ll, bool> visited;
map<ll, vector<ll>> group;

ll search(ll point)
{
    if (visited[point])
    {
        return point;
    }
    ll ans = point;
    visited[point] = true;
    for (auto y : group[point])
    {
        ans = max(ans, search(y));
    }
    return ans;
}

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        group.clear();
        visited.clear();
        ll res = n;
        for (int i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            ll uid = x - (n + 1 - i);
            ll vid = uid - 1 + i;

            if (uid < 0)
            {
                continue;
            }

            if (uid != vid)
            {
                group[uid].push_back(vid);
            }
        }
        res += search(0);
        cout << res << endl;
    }

    return 0;
}