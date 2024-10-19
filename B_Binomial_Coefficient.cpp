// Problem Solver: Mushfiq R.
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vsort(v) sort(v.begin(), v.end())
const ll MOD = 1e9 + 7;
const ll MAX_N = 1e5 + 1;

ll binomialCoeff(ll base, ll exp, ll mod)
{
    ll ans = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            ans = (1LL * ans * base) % mod;
        base = (1LL * base * base) % mod;
        exp /= 2;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> arrn(n), arrk(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> arrn[i];
    }

    for (ll i = 0; i < n; i++)
    {
        cin >> arrk[i];
    }

    for (ll i = 0; i < n; i++)
    {
        cout << binomialCoeff(2, arrk[i], MOD) << endl;
    }

    return 0;
}
