// Copyright: Mushfiq R.
#include <iostream>
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
        int n, k;
        cin >> n >> k;
        if (k == n)
        {
            while (n--)
            {
                cout << 1 << ' ';
            }
        }
        else if (k == 1)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << ' ';
            }
        }
        else
        {
            cout << -1;
        }
        cout << endl;
    }

    return 0;
}