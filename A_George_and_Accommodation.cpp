#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, a, b, count=0;
	cin >> t;
    for(int i=0; i<t; i++){
        cin >> a >> b;
        if(b-a > 1){
            count++;
        }
    }

    cout << count;
	return 0;
}