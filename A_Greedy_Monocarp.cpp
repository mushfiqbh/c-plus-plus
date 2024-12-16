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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // sort descending
        rsort(arr);

        ll summ = 0;
        for (int i = 0; i < n; i++)
        {
            summ += arr[i];
            if (summ > k)
            {
                summ -= arr[i];
                break;
            }
        }

        cout << k - summ << endl;
    }

    return 0;
}
