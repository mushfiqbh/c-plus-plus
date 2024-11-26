// Time Complexity : O(n)
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll summ = n * (n + 1) / 2;
        for (int i = 1; i <= n; i *= 2)
        {
            summ -= 2 * i;
        }

        cout << summ << endl;
    }
    return 0;
}