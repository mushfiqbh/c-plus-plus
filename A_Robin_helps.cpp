// Problem Solver: Mushfiq R.
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long
#define ld long double
#define vsort(v) sort(v.begin(), v.end())

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> golds(n);
        for (int i = 0; i < n; i++)
        {
            cin >> golds[i];
        }

        int robin = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            if (golds[i] >= k)
            {
                robin += golds[i];
            }
            else if (golds[i] == 0 && robin > 0)
            {
                count++;
                robin--;
            }
        }

        cout << count << endl;
    }

    return 0;
}