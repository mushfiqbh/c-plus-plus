// Problem Solver: Mushfiq R.
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long
#define ld long double
#define vsort(ratings) sort(ratings.begin(), ratings.end())

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> ratings(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> ratings[i];
        }

        ll sum = 0;
        for (ll i = 0; i < n - 2; i++)
        {
            sum += ratings[i];
        }

        cout << ratings[n - 1] - (ratings[n - 2] - sum) << endl;
    }

    return 0;
}
