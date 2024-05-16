// Copyright: Mushfiq R.
#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
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
        int x, maxSum = 0, maxx;
        cin >> x;
        for (int y = 1; y < x; y++)
        {
            int xy = gcd(x, y) + y;
            if (xy > maxSum)
            {
                maxx = y;
                maxSum = xy;
            }
        }
        cout << maxx << endl;
    }

    return 0;
}
