// Copyright: Mushfiq R.
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long t, n;
    cin >> t;
	while (t--)
	{
        cin >> n;
        if(n % 2 == 0){
            cout << n/2*13 << endl;
        }else{
            cout << n/2*13 + 6 << endl;
        }
	}

	return 0;
}
