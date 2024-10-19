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
    int n, m;
    cin >> n >> m;

    int current = 1;
    ull moves = 0;
    for (int i = 0; i < m; i++)
    {
        int goal;
        cin >> goal;
        if (goal - current >= 0)
        {
            moves += goal - current;
            current = goal;
        }
        else
        {
            moves += goal - current + n;
            current = goal;
        }
    }
    cout << moves;

    return 0;
}