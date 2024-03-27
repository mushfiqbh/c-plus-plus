// Copyright: Mushfiq R.
#include <iostream>
#include <vector>
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
        int n, k, x;
        cin >> n >> k >> x;
        if (x <= k)
        {
            cout << "No" << endl;
        }
        else
        {
            vector<int> a(n, 0);
            a[0] = x - 1;
            for (int i = 1; i < n; i++)
            {
                a[i] = a[i - 1] + 1;
            }
            cout << "Yes" << endl;
        }
    }
    return 0;
}