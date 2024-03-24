#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        long long a[n];
        long long b[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (long long i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        long long res = a[m - 1];
        for (long long i = m; i < n; i++)
        {
            res += min(a[i], b[i]);
        }
        cout << res << endl;
    }
    return 0;
}