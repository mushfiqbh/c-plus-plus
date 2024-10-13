// Problem Solver: Mushfiq R.
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vsort(v) sort(v.begin(), v.end())

int abs(int a, int b)
{
    if (a > b)
    {
        return a - b;
    }
    return b - a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a > c)
        {
            swap(a, c);
            swap(b, d);
        }

        // Non-overlapping segments
        if (b <= c)
        {
            cout << 1 << endl;
        }
        else
        {
            int locks = max(0, min(b, d) - max(a, c) + 1);
            cout << locks << endl;
        }
        
    }

    return 0;
}