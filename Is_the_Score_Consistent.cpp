#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, a, b, c, d;

    cin >> t;
    while(t--){
        cin >> a >> b;
        cin >> c >> d;
        if(c >= a && d >= b){
            cout << "POSSIBLE" << endl;
        }else{
            cout << "IMPOSSIBLE" << endl;
        }
    }

	return 0;
}