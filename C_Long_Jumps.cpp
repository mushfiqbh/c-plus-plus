// Author: Mushfiq R.
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
#define vsort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<int>())
#define fastIO()(ios_base::sync_with_stdio(false), cin.tie(NULL));
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
        int maxx = 0;
        int ans[n];
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = n - 1; i >= 0; i--)
        {
            int idx = i; 
            ans[i] = arr[i];    
            idx += arr[i];

            if (idx < n)
            {
                ans[i] += ans[idx];
            }
        }

        for (int i = 0; i < n; i++)
        {
            maxx = max(maxx, ans[i]);
        }
        cout << maxx << endl;
    }

    return 0;
}
