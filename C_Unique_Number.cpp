// Author: Mushfiq R.
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ld long double
#define ull unsigned long long
#define vsort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<int>())
#define fastIO() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        if (n < 10)
        {
            cout << n << endl;
            continue;
        }

        ll x = 9, sum = 0;
        string txt;
        set<int> unq;
        
        while (x > 0)
        {
            if (n - sum >= x)
            {
                sum += x;
                txt += (x + '0');
                unq.insert(x);
            }
            x--;
        }

        if (txt.length() != unq.size() || sum != n)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(txt.begin(), txt.end());
            cout << txt << endl;
        }
    }

    return 0;
}