// Copyright: Mushfiq R.
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t, n;
    cin >> t;
    while (t--)
    {
        int a, b, cnt = 0;
        cin >> a >> b;

        while (true)
        {
            if (a - b >= 10)
            {
                cout << cnt << endl;
                break;
            }
            a += 3;
            cnt++;
        }
    }

    return 0;
}
