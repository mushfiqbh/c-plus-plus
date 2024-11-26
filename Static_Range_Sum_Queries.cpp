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
    ll n, q;
    cin >> n >> q;

    vector<ll> vec(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    vector<ll> psum(n + 1, 0);
    for (ll i = 0; i < n; i++)
    {
        psum[i + 1] = psum[i] + vec[i];
    }

    while (q--)
    {
        ll l, h;
        cin >> l >> h;
        cout << psum[h] - psum[l - 1] << endl;
    }

    return 0;
}