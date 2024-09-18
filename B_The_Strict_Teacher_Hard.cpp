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
        int n, m, q;
        cin >> n >> m >> q;

        vector<int> v(m);
        for (int i = 0; i < m; ++i)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        while (q--)
        {
            int pos, result;
            cin >> pos;

            if (pos < v[0])
            {
                result = v[0] - 1;
            }
            else if (pos > v.back())
            {
                result = n - v.back();
            }
            else
            {
                auto ub = upper_bound(v.begin(), v.end(), pos);
                auto lb = ub;
                --lb;

                int midVal = (*ub + *lb) / 2;
                result = min(abs(midVal - *ub), abs(midVal - *lb));
            }

            cout << result << endl;
        }
    }

    return 0;
}
