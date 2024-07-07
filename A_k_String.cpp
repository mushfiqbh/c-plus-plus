// Problem Solver: Mushfiq R.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char ch;
    int n, count = 0;
    cin >> n;
    string str;
    cin >> str;

    sort(str.begin(), str.end());
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        if (i % n == 0)
        {
            ch = str[i];
        }
        if (str[i] == ch)
        {
            count++;
        }
    }

    if (len == count && count % n == 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < len; j += n)
            {
                cout << str[j];
            }
        }
    }
    else
    {
        cout << "-1";
    }

    return 0;
}
