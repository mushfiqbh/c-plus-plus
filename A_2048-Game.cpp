// Time Complexity : O(n^2)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x <= 2048)
            {
                freq[x]++;
            }
        }

        for (auto &item : freq)
        {
            int value = item.first;
            int frequency = item.second;
            while (frequency > 1 && value <= 1024)
            {
                freq[value * 2] += frequency / 2;
                frequency %= 2;
            }
        }

        cout << (freq[2048] > 0 ? "YES" : "NO") << endl;
    }

    return 0;
}
