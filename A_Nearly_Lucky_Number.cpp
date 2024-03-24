#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long n;
	cin >> n;
	int luck=0;
	while (n != 0)
	{
		int digit = n%10;
		if(digit == 7 || digit == 4){
			luck++;
		}
		n = n/10;
	}

	if(luck==4 || luck==7)
        cout<<"YES";
    else
        cout<<"NO";

	return 0;
}