// Time Complexity : O(n)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int optimal = 2;
        int summ = (n / 2) * (n / 2 + 1);

        for (int x = 3; x <= n; x++)
        {
            int maxx = x * (n / x) * (n / x + 1) / 2;

            if (maxx > summ)
            {
                summ = maxx;
                optimal = x;
            }
        }

        cout << optimal << endl;
    }

    return 0;
}
