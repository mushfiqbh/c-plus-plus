// Problem Solver: Mushfiq R.
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
        int n;
        cin >> n;
        for (int k = 1; k <= n; k++)
        {
            cout << k;
            cout << ' ';
        }
        cout << endl;
    }

    return 0;
}
