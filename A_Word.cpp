// Copyright: Mushfiq R.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cnt = 0;
    string s;
    cin >> s;
    for (char c : s)
    {
        if (c <= 'Z')
        {
            cnt++;
        }
    }

    if (cnt <= (s.length() - cnt))
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s;
    }

    return 0;
}
