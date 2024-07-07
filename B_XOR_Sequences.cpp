// Problem Solver: Mushfiq R.
#include <iostream>
using namespace std;
typedef long long ll;

int countTrailingZeros(ll num)
{
    int count = 0;
    while ((num & 1) == 0)
    {
        count++;
        num >>= 1;  // Right shift and assignment
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;

        ll z = x ^ y;
        // optimal solution
        int trailingZeros = countTrailingZeros(z);

        cout << ((1LL << trailingZeros)) << endl;
    }

    return 0;
}
