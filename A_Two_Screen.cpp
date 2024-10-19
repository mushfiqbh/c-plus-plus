// Problem Solver: Mushfiq R.
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vsort(v) sort(v.begin(), v.end())

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string txt1, txt2;
        cin >> txt1 >> txt2;
        int s_len = txt1.length(), t_len = txt2.length();
        int curr = 0;
        while (curr < min(s_len, t_len) && txt1[curr] == txt2[curr])
        {
            curr++;
        }
        int cost = s_len + t_len;
        int copyCost = curr + 1 + (s_len - curr) + (t_len - curr);
        cout << min(cost, copyCost) << endl;
    }

    return 0;
}