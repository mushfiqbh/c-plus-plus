// Author: Mushfiq R.
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define vsort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<int>())
#define rev(a) reverse(a.begin(), a.end())
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

        string ans = "";
        // if first char is greater or equal to second answer mirrored at 0th index
        ans += txt[0];

        if (txt[0] > txt[1])
        {
            // else answer mirrored until descending alphabet
            for (int i = 1; i < n; i++)
            {
                if (txt[i] <= txt[i - 1])
                {
                    ans += txt[i];
                }
                else
                {
                    // here ascending alphabet found so break
                    break;
                }
            }
        }

        cout << ans;
        rev(ans);
        cout << ans << endl;
    }

    return 0;
}