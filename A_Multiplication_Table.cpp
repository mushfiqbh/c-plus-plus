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

    int n, x, c(0);
    cin >> n >> x;

    for (int i = 1; i <= n; i++)
    {
        if (x % i == 0 and x / i <= n)
        {
            c++;
        }
    }

    cout << c;

    return 0;
}