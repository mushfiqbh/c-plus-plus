// Problem Solver: Mushfiq R.
#include <iostream>
#include <vector>
#include <cmath>
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
        int n, m, q, m1, m2, q1, ans;
        cin >> n >> m >> q;
        cin >> m1 >> m2;
        cin >> q1;

        if (q1 < min(m1, m2))
        {
            ans = min(m1, m2) - 1;
        }
        else if (q1 > max(m1, m2))
        {
            ans = n - max(m1, m2);
        }
        else
        {
            int mid = (m1 + m2) / 2;
            ans = min(abs(m1 - mid), abs(m2 - mid));
        }

        cout << ans << endl;
    }

    return 0;
}