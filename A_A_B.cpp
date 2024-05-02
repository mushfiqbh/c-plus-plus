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
        int sum = 0;
        string s;
        cin >> s;
        for (char c : s)
        {
            if (c != '+')
            {
                sum += (c - '0');
            }
        }
        cout << sum << endl;
    }

    return 0;
}
