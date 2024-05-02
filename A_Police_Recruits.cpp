// Copyright: Mushfiq R.
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, free = 0, cnt = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (free == 0 && n == -1)
        {
            cnt++;
        }
        else if (n == -1)
        {
            free--;
        }
        else
        {
            free += n;
        }
    }

    cout << cnt;

    return 0;
}
