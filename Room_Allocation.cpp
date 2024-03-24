#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, n, p, count;
    cin >> t;
    while(t--){
        count=0;
        cin >> n;
        while(n--){
            cin >> p;
            count += ceil(float(p)/2);
        }
        cout << count << endl;
    }

	return 0;
}