// Problem Solver: Mushfiq R.
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long
#define ld long double
#define vsort(v) sort(v.begin(), v.end())

int maxScore(const vector<int> &arr, int n, int start)
{
    int maxx = 0, count = 0;
    for (int i = start; i < n; i += 2)
    {
        maxx = max(maxx, arr[i]);
        count++;
    }
    return maxx + count;
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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int score = max(maxScore(arr, n, 0), maxScore(arr, n, 1));
        cout << score << endl;
    }

    return 0;
}
