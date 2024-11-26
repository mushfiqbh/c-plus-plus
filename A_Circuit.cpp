// Author: Mushfiq R.
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define vsort(v) sort(v.begin(), v.end())
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 1; i <= 2*n; i++)
        {
            int m;
            cin >> m;
            sum += m;
        }

        cout << (sum & 1) << " " << min((2 * n - sum), sum) << endl;
    }
    return 0;
}