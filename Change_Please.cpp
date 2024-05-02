// Copyright: Mushfiq R.
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
    cin >> t;
	while (t--)
	{
        int n;
        cin >> n;
        cout << ((100-n)/10)*10 << endl;
	}

	return 0;
}
