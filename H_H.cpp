#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

void maximize()
{
    ll x;
    cin >> x;
    ll bestY = 0, bestGCD = 0;
    for (ll y = 1; y < x; ++y)
    {
        ll currentGCD = gcd(x, y);
        if (currentGCD + y > bestGCD)
        {
            bestGCD = currentGCD + y;
            bestY = y;
        }
    }
    cout << bestY << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        maximize();
    }
    return 0;
}