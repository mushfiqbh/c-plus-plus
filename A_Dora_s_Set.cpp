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
        int m, n;
        cin >> m >> n;

        int start = min(m, n) + 1;
        int end = max(m, n) - 1;

        for (int i = start; i < end - 1; ++i)
        {
            for (int j = start + 1; j < end; ++j)
            {
                for (int k = start + 2; k <= end; ++k)
                {
                    if (i != j && i != k && j != k)
                    {

                        cout << i << j << k << endl;
                    }
                }
            }
        }
    }

    return 0;
}
