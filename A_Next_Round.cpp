#include <iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	k--;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (n == 1 && a[i] != 0)
			count++;
		else if (a[i] >= a[k] && a[i] != 0)
			count++;
	}
	cout << count;
	delete[]a;
	return 0;
}