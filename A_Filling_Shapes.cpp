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
    
    int n;
    cin >> n;
    if(n % 2 == 1)
    {
        cout << 0 << endl;
    }
    else{
        cout << fixed << setprecision(0) << pow(2, n/2) << endl;
    }

    return 0;
}