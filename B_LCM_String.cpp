// Problem Solver: Mushfiq R.
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define vsort(v) sort(v.begin(), v.end())
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

string check(string s, int k)
{
    string r = "";
    while (k--)
    {
        r += s;
    }

    return r;
}

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;

        ll g = __gcd(s.length(), t.length());
        if (check(s, t.length() / g) == check(t, s.length() / g))
            cout << check(s, t.length() / g) << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}