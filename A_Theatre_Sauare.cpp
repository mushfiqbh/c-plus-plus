// Problem Solver: Mushfiq R.
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vsort(v) sort(v.begin(), v.end())

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned long long n, m, a = 1;
    unsigned long long na, ma, res = 0;
    cin >> n >> m >> a;

    na = n / a;
    ma = m / a;

    if (n % a != 0)
        na++;

    if (m % a != 0)
        ma++;

    cout << na * ma;

    return 0;
}