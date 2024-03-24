#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	long long t, n, sum=0, len=0;
    cin >> t;
    while(t--){
        cin >> n;
        sum += n;
        len++;
    }
    cout << fixed << setprecision(12) << (double)sum/len;

	return 0;
}