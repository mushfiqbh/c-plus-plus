#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, a, b, c;

    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        if(a <= b && c <= b){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

	return 0;
}