// Problem Solver: Mushfiq R.
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vsort(v) sort(v.begin(), v.end())

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, d, m;
        cin >> a >> b;
        int h = a;

        while (a >= b)
        {
            d = a / b;
            h += d;
            m = a % b;
            a = d + m;
        }
        

        cout << h << endl;
    }

    return 0;
}