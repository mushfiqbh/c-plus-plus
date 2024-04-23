// Copyright: Mushfiq R.
#include <iostream>
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
        int n, c, d;
        cin >> n >> c >> d;
        int arr[n * n], brr[n * n];

        for (int i = 0; i < (n * n); i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + (n * n));
        int first = arr[0];

        for (int i = 0; i < n; i++)
        {
            int sec = first + i * d;
            for (int j = 0; j < n; j++)
            {
                brr[i * n + j] = (sec + c * j);
            }
        }

        sort(brr, brr + (n * n));
        int possible = 1;

        for (int i = 0; i < (n * n); i++)
        {
            if (arr[i] != brr[i])
            {
                possible = 0;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
