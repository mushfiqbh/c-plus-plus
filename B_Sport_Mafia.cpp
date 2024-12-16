// Time Complexity : O(logn)
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, k;
    cin >> n >> k;
    ll low = 0, high = n;
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        ll check = ((n - mid) * ((n - mid) + 1)) / 2 - mid;

        if (check == k)
        {
            cout << mid << endl;
            return 0;
        }
        else if (check > k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}
