// Problem Solver: Mushfiq R.
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string &s)
{
    int left = 0;
    int right = s.length() - 1;

    while (left < right)
    {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (isPalindrome(s))
        {
            cout << "NO";
        }
        else
        {
            string txt = "";
            for (char c : s)
            {
                txt = c + txt;
            }
            cout << "YES\n"
                 << txt;
        }

        cout << endl;
    }

    return 0;
}
