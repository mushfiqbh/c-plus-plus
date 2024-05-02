// Copyright: Mushfiq R.
#include <iostream>
#include <string>
#include <unordered_set>
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
        int n, cnt = 0;
        unordered_set<char> used;
        string s;
        cin >> n;
        cin >> s;
        for (char c : s)
        {
            if (used.count(c) == 0)
            {
                cnt += 2;
                used.insert(c);
            }
            else
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
