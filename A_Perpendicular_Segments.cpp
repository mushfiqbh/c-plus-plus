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
        int x, y, k;
        cin >> x >> y >> k;
        
        int mn = min(x, y);

        cout << 0 << " " << 0 << " " << mn << " " << mn << endl;
        cout << 0 << " " << mn << " " << mn << " " << 0 << endl;
    }

    return 0;
}