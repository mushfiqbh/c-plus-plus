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
        int a, b;
        cin >> a >> b;
        if (a >= b)
        {
            cout << a << endl;
        }
        else
        {
            int r = b - a;
            if (a - r >= 0)
            {
                cout << a - r << endl;
            }
            else
            {
                cout << "0\n";
            }
        }
    }

    return 0;
}
