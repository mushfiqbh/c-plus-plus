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
        int x, y, k;
        cin >> x >> y >> k;

        int right = 2 * (int)ceil(double(x) / k) - 1;
        int up = 2 * (int)ceil(double(y) / k);
        cout << max(right, up) << endl;
    }

    return 0;
}