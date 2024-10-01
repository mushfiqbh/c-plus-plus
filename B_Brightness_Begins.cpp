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
        ll n;
        cin >> n;
        ll left = 1, right = 2e18, res = 0;

        while (left <= right)
        {
            ll midium = (left + right) / 2;
            ll sq = sqrt(midium);

            while (sq * sq > midium)
            {
                sq--;
            }
            while ((sq + 1) * (sq + 1) <= midium)
            {
                sq++;
            }

            ll count = midium - sq;
            if (count >= n)
            {
                res = midium;
                right = midium - 1;
            }
            else
            {
                left = midium + 1;
            }
        }
        
        cout << res << endl;
    }

    return 0;
}