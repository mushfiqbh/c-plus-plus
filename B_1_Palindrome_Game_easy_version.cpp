// Author: Mushfiq R.
#include <bits/stdc++.h>
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
        int n;
        cin >> n;
        string txt;
        cin >> txt;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (txt[i] == '0')
            {
                count++;
            }
        }

        if (count == 2 && n % 2 != 0 && txt[n / 2] == '0')
        {
            cout << "DRAW" << endl;
        }
        else if (count == 1 || count % 2 == 0)
        {
            cout << "BOB" << endl;
        }
        else
        {
            cout << "ALICE" << endl;
        }
    }

    return 0;
}
