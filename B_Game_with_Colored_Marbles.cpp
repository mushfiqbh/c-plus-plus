// Author: Mushfiq R.
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define vsort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<int>())
#define fastIO() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        
        map<int, int> nums;
        while (n--)
        {
            int x;
            cin >> x;
            nums[x]++;
        }
        
        for (auto iter : nums)
        {
            if (iter.second == 1)
            {
                count++;
            }
        }

        cout <<  2 * ((count + 1) / 2) - count + nums.size() << endl;
    }

    return 0;
}
