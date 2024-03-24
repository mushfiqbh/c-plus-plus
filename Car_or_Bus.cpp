#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, car, bike;
    
    cin >> t;
    while(t--){
        cin >> car >> bike;
        if(car > bike){
            cout << "CAR" << endl;
        }else if(bike > car){
            cout << "BIKE" << endl;
        }else{
            cout << "SAME" << endl;
        }
    }

	return 0;
}