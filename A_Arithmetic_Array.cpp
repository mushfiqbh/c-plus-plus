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
        int n;
        cin >> n;
        int summ = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            summ += x;
        }

        if (summ < n)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << summ - n << endl;
        }
    }

    return 0;
}