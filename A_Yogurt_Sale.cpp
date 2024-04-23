// Copyright: Mushfiq R.
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (b >= 2 * a)
        {
            cout << n * a << endl;
        }
        else
        {
            if (n % 2 == 0)
            {
                cout << n / 2 * b << endl;
            }
            else
            {
                cout << (n - 1) / 2 * b + a << endl;
            }
        }
    }

    return 0;
}
