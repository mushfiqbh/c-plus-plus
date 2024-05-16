// Problem Solver: Mushfiq R.
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	unsigned long long n;
    cin >> n;
    cout << (n-1) * n * (n+1) / 6 + n;

	return 0;
}
