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
        ull n;
        cin >> n;

        bool flag = false;

        if (n % 2 == 1)
        {
            flag = true;
        }
        else
        {
            ull div = n;
            while (div > 2)
            {
                div /= 2;
                if (div & 1 && n % div == 0)
                {
                    flag = true;
                    break;
                }
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}