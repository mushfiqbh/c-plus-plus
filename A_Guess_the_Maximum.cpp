// Problem Solver: Mushfiq R.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMinDiff(const vector<int> &digits)
{
    // max value of the digits
    int maxVal = *max_element(digits.begin(), digits.end());

    // minimum of max value
    int minDiff = maxVal;
    for (int i = 0; i < digits.size() - 1; ++i)
    {
        int subVectorMax = max(digits[i], digits[i + 1]);
        minDiff = min(minDiff, subVectorMax - 1);
    }

    return minDiff;
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
        vector<int> digits(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> digits[i];
        }

        cout << findMinDiff(digits) << endl;
    }

    return 0;
}
