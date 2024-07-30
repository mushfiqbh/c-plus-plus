// Problem Solver: Mushfiq R.
#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int k = 0, sum = 0, more = 0;
        for (ll i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            sum += max(0, k - v);
            more = max(more, max(0, k - v));
            k = max(k, v);
        }

        sum += more;
        cout << sum << endl;
    }

    return 0;
}
