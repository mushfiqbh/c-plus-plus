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
        vector<int> arr, even, odd;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
                even.push_back(x);
            else
                odd.push_back(x);
        }

        for (int i = 0; i < even.size(); i++)
            arr.push_back(even[i]);
        for (int i = 0; i < odd.size(); i++)
            arr.push_back(odd[i]);

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(__gcd(arr[i], 2*arr[j]) > 1)
                {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}