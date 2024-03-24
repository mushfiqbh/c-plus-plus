#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
    long long n;

    cin >> t;
    while(t--){
        cin >> n;
		if (n % 2 == 0)
			cout << n / 2 << endl;
		else
			cout << (n - 1) / 2 << endl;
    }
	
	return 0;
}