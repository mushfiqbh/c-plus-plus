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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            int diff = abs(v[i] - v[i + 1]);
            if (diff != 5 && diff != 7)
            {
                cout << "NO" << endl;
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}