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
        int n, limit, count = 0;
        cin >> n >> limit;
        string word, text = "";

        while (n--)
        {
            cin >> word;
            text += word;

            if (text.length() <= limit)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}