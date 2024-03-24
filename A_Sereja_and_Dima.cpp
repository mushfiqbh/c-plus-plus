#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, sumSe=0, sumDi=0, loop=0;

    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int x = 0;
    int y = n - 1;
    while (x <= y)
    {
        if (loop % 2 == 0)
        {
            if (max(a[x], a[y]) == a[x])
            {
                sumSe += a[x];
                x++;
            }
            else
            {
                sumSe += a[y];
                y--;
            }
        }
        else
        {
            if (max(a[x], a[y]) == a[x])
            {
                sumDi += a[x];
                x++;
            }
            else
            {
                sumDi += a[y];
                y--;
            }
        }
        loop++;
    }
    cout << sumSe << " " << sumDi;
    return 0;
}