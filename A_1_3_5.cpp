// Problem Solver: Mushfiq R.
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
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
        int n;
        cin >> n;

        int e = n % 8;

        if (n % 3 == 0 || n % 5 == 0 || n % 8 == 0 || e % 3 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (min(n % 3, n % 5)) << endl;
        }
    }

    return 0;
}