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
    ll t;
    cin >> t;
    while (t--)
    {
        ll int n, k, r;
        cin >> n >> k;

        if (n % k == 0)
        {
            cout << "1" << endl;
        }
        else if (k % n == 0)
        {
            cout << k / n << endl;
        }
        else if (n > k)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << (k / n) + 1 << endl;
        }
    }

    return 0;
}
