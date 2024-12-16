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
        int a, b;
        cin >> a >> b;

        int m = min(a, b);
        while (true)
        {
            if (m % a == m % b)
            {
                cout << m << endl;
                break;
            }
            m++;
        }
    }

    return 0;
}