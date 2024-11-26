// Problem Solver: Mushfiq R.
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define vsort(v) sort(v.begin(), v.end())
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int hour = stoi(s.substr(0, 2));
        int minute = stoi(s.substr(3, 2));

        string period; // AM or PM

        if (hour < 12)
        {
            period = "AM";
            if (hour == 0)
            {
                hour = 12;
            }
        }
        else
        {
            period = "PM";
            if (hour > 12)
            {
                hour -= 12;
            }
        }
        cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << " " << period << endl;
    }
    return 0;
}