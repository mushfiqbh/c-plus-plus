// Copyright: Mushfiq R. (wrong answer)
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> sale(n);
        for (int i = 0; i < n; i++)
        {
            cin >> sale[i];
        }

        vector<int> result;
        int sum = 0;
        int maxx = 0;

        for (int i = 0; i < n; i++)
        {
            int j;
            for (j = 0; j < i; j++)
            {
                sum += sale[j];
            }
            sum += sale[j]*2;
        }
        result.push_back(sum);

        for (int i = 0; i < n; i++)
        {
            cout << result[i] << ' ';
        }
    }

    return 0;
}