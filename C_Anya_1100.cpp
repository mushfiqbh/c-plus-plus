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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int q;
        cin >> s >> q;
        int n = s.size();

        set<int> arr;
        for (int i = 0; i <= n - 4; ++i)
        {
            if (s.substr(i, 4) == "1100")
            {
                arr.insert(i);
            }
        }

        while (q--)
        {
            int index, v;
            cin >> index >> v;
            index--;

            if (s[index] != '0' + v)
            {
                int mx = max(0, index - 3);
                int mn = min(n - 4, index);
                for (int i = mx; i <= mn; i++)
                {
                    if (s.substr(i, 4) == "1100")
                    {
                        arr.erase(i);
                    }
                }

                s[index] = '0' + v;
                for (int i = mx; i <= mn; i++)
                {
                    if (s.substr(i, 4) == "1100")
                    {
                        arr.insert(i);
                    }
                }
            }
            cout << (arr.size() > 0 ? "YES" : "NO") << endl;
        }
    }

    return 0;
}
