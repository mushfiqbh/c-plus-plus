// Mushfiq R.
#include <iostream>
#include <vector>
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
		vector<int> a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];

		if (a[0] != a[1] && a[0] != a[2])
			cout << 1;
		else if (a[n - 1] != a[n - 2] && a[n - 1] != a[n - 3])
			cout << n;
		else
		{
			int vti = -1;
			for (int i = 1; i < n - 1; i++)
				if (a[i] != a[i - 1] && a[i] != a[i + 1])
					vti = i;
			cout << vti + 1;
		}
		cout << "\n";
	}
	return 0;
}
