#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a[5][5];
	int step = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> a[i][j];
			if (a[i][j] == 1)
			{
				step = abs(i - j);
				if (i == j && i != 2 & (j == 0 || j == 4))
				{
					step = 4;
				}
				if (i == j && i != 2 & (j == 1 || j == 3))
				{
					step = 2;
				}
				if (!(i == 2 || j == 2) &&step == 1)
				{
					step = 3;
				}
				break;
			}
        }
    }
	cout << step;
}