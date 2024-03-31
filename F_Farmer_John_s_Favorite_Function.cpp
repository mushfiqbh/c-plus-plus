// Copyright: Mushfiq R.
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef ld long double;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ld n, q;
    cin >> n >> q;
    vector<ld> arr(n);
    for(long long i=0; i<n; i++){
        cin >> arr[i];
    }
    while(q--){
        ld k, x;
        cin >> k >> x;
        arr[k-1] = x;
        ld fn = sqrt(arr[0]);
        for(long long i=2; i<n; i++){
            fn = sqrt(fn+arr[i-1]);
        }

        cout << floor(fn) << endl;
    }

	return 0;
}
