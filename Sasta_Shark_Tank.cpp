#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, a, b;

    cin >> t;
    while(t--){
        cin >> a >> b;
        a = a * 10;
        b = b * 5;

        if(a > b){
            cout << "FIRST" << endl;
        }else if(b > a){
            cout << "SECOND" << endl;
        }else{
            cout << "ANY" << endl;
        }
    }	

	return 0;
}