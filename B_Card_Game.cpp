// Problem Solver: Mushfiq R.
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int score(int a, int b, int c, int d)
{
    int f = 0;
    int s = 0;
    if (a > b)
    {
        f++;
    }
    else if (a == b)

    {
        s++;
    }
    if (c > d)
    {
        f++;
    }
    else if (c == d)
    {
        s++;
    }
    return f > s;
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int ans = 0;
        ans = ans + score(a1, b1, a2, b2);
        ans = ans + score(a1, b2, a2, b1);
        ans = ans + score(a2, b1, a1, b2);
        ans = ans + score(a2, b2, a1, b1);
        cout << ans << endl;
    }

    return 0;
}