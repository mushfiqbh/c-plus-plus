// Copyright: Mushfiq R.
#include <iostream>
#include <string>
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
        int n, adj = 0, cnt = 0;
        string s;
        cin >> n >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && s[i + 1] == '1')
            {
                adj++;
            }

            if (s[i] == '1')
            {
                cnt++;
            }
        }

        if (cnt % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else if (adj == 1 && cnt == 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
