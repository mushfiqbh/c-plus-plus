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
        int n;
        cin >> n;
        vector<int> arr(n);
        int mn = 1, mx = 3;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr[i] = x;
            mn = min(mn, x);
            mx = max(mx, x);
        }
        
        if (is_sorted(arr.begin(), arr.end()))
        {
            cout << 0 << endl;
        }
        else
        {
            if (arr[0] == mn || arr[n - 1] == mx)
            {
                cout << 1 << endl;
            }
            else if (arr[0] == mx && arr[n - 1] == mn)
            {
                cout << 3 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }

    return 0;
}