// Copyright: MUshfiq R.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int median = n / 2;
        if (n % 2 == 0)
        {
            median--;
        }

        int cnt = 1;

        for (int i = median + 1; i < n; i++)
        {
            if (arr[i] == arr[median])
            {
                cnt++;
            }
            else
            {
                break;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
