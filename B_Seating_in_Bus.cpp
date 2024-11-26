// Author: Mushfiq R.
#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        set<int> arr;
        int n;
        cin >> n;
        bool k = true;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            arr.insert(x);

            if (i != 0 && arr.find(x - 1) == arr.end() && arr.find(x + 1) == arr.end())
            {
                k = false;
            }
        }

        cout << (k ? "YES" : "NO") << endl;
    }

    return 0;
}
