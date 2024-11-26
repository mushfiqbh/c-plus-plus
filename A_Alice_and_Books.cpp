// Author: Mushfiq R.
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define vsort(v) sort(v.begin(), v.end())
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> books(n);
        for (auto &i : books)
        {
            cin >> i;
        }

        int ans = books.back() + (*max_element(books.begin(), books.begin() + n - 1));
        cout << ans << endl;
    }
    return 0;
}