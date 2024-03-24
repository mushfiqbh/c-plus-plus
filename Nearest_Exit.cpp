#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, n;

    cin >> t;
    while(t--){
        cin >> n;
        if(n <= 50){
            cout << "LEFT" << endl;
        }else{
            cout << "RIGHT" << endl;
        }
    }
	
	return 0;
}