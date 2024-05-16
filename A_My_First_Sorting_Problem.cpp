// Problem Solver: Mushfiq R.
#include <iostream>
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

        int mx = max(m, n);
        int mn = min(m, n);
        cout << mn << ' ' << mx << endl;
    }

    return 0;
}
