// Problem Solver: Mushfiq R.
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
        int x, y, a, b;
        cin >> x >> y >> a >> b;

        if (2 * a < b)
        {
            cout << (a * x + y * a) << endl;
            continue;
        }
        else
        {
            cout << ((max(x, y) - min(x, y)) * a + min(x, y) * b) << endl;
        }
    }

    return 0;
}