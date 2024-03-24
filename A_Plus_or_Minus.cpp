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
        if(a+b == c){
            cout << '+' << endl;
        }else{
            cout << '-' << endl;
        }
    }
	
	return 0;
}