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
    const int MXN = 1e5 + 5;
    int width[MXN + 1], height[MXN + 1];

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> width[i] >> height[i];
        }

        cout << (*max_element(width + 1, width + n + 1) + *max_element(height + 1, height + n + 1)) * 2 << endl;
    }

    return 0;
}
