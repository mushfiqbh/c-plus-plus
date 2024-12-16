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
        string s;
        cin >> s;

        int indexA = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a')
            {
                indexA = i;
                break;
            }
        }

        if (indexA == -1)
        {
            cout << "NO" << endl;
        }
        else
        {
            bool flag = true;
            int left = indexA;
            int right = indexA;
            char val = 'b';
            
            for (int i = 1; i < s.size(); i++)
            {
                if (left >= 0 && s[left - 1] == val)
                {
                    left--;
                }
                else if (right + 1 < s.size() && s[right + 1] == val)
                {
                    right++;
                }
                else
                {
                    flag = false;
                    break;
                }
                val++;
            }

            cout << (flag ? "YES" : "NO") << endl;
        }
    }

    return 0;
}