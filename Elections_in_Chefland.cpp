#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, n, age, x, count;

    cin >> t;
    while(t--){
        cin >> n >> age;
        count = 0;
        while(n--){
            cin >> x;
            if(x >= age){
                count++;
            }
        }
        cout << count << endl;
    }

	return 0;
}