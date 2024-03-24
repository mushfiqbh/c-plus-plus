#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t, a, b, m;

    cin >> t;
    while (t--)
    {
        cin >> a >> b >> m;
        cout << (m / a) + (m / b) + 2 << endl;
    }

    return 0;
}