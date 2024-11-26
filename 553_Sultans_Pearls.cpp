// Author: Mushfiq R.
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define vsort(v) sort(v.begin(), v.end())
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

bool isStable(deque<pair<int, int>> &dq, int m, int k)
{
    int table = 0;
    int hang = 0;
    for (int i = dq.size() - 1; i >= 0; i--)
    {
        if (m > 0)
        {
            hang += dq[i].first;
        }
        else
        {
            table += dq[i].first;
        }
        m--;
    }

    return hang <= table * k;
}

int main()
{
    fastread();
    int n, m, k;
    cin >> n >> m >> k;

    deque<pair<int, int>> dq;
    for (int i = 0; i < n; i++)
    {
        int w, c;
        cin >> w >> c;
        dq.push_back(make_pair(w, c));
    }

    int cnt = 0, sum = 0;
    string st = "";
    while (isStable(dq, m, k))
    {
        cnt++;
        if (dq.front().second > dq.back().second)
        {
            sum += dq.front().second;
            st += "T";
            dq.pop_front();
        }
        else
        {
            sum += dq.back().second;
            st += "H";
            dq.pop_back();
        }
    }

    cout << cnt << " " << sum << endl;
    cout << st << endl;

    return 0;
}