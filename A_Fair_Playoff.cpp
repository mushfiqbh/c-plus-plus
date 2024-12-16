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
        int arr[4];
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

        int f1 = max(arr[0], arr[1]);
        int f2 = max(arr[2], arr[3]);

        sort(arr, arr + 4, greater<int>());

        if ((f1 == arr[0] && f2 == arr[1]) || (f1 == arr[1] && f2 == arr[0]))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}