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
	int arr[12] = {4, 7, 47, 74, 44, 444, 447, 474, 477, 777, 774, 744};

	for (int i = 0; i < 12; i++)
	{
		if (n % arr[i] == 0)
		{
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";

	return 0;
}
