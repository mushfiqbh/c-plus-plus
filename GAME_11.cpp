// Copyright: Mushfiq R.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
    cin >> t;
	while (t--)
	{
        ll m, n;
        cin >> m >> n;        
        vector<ll> scores(m+n);
        for (ll i = 0; i < m+n; i++)
        {
            cin >> scores[i];
        }        
        
        if(m < 4 || n < 4){
            cout << -1 << endl;
            continue;
        }

        sort(scores.begin(), scores.end(), greater<>());
        ll sum=0;
        for (ll i = 0; i < 11; i++)
        {
            sum += scores[i];
        }
        cout << sum << endl;
	}

	return 0;
}
