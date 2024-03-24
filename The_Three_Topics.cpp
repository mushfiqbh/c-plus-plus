#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int a, b, c, x;

    cin >> a >> b >> c >> x;
    if(x==a || x==b || x==c){
        cout << "Yes";
    }else{
        cout << "No";
    }
	
	return 0;
}