// Copyright: Mushfiq R.
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    {
        long long t;
        cin >> t;

        while (t--)
        {
            long long n;
            cin >> n;

            vector<long long> arr(n);
            for (long long i = 0; i < n; i++)
            {
                cin >> arr[i];
            }

            vector<long long> prr(n);
            long long cmex = n;

            for (long long i = n - 1; i >= 0; i--)
            {
                if (arr[i] > 0)
                {
                    int mex = cmex - arr[i];
                    prr[i] = mex;
                    cmex = mex;
                }
                else
                {
                    prr[i] = cmex + abs(arr[i]);
                }
            }

            for (long long i = 0; i < n; i++)
            {
                cout << prr[i] << " ";
            }
            cout << endl;
        }

        return 0;
    }
}