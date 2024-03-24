#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, n, dv;
    string num;

    cin >> t;
    while(t--){
        num = "";
        cin >> n;
        while(n){
            dv = n % 10;
            n = n / 10;

            num += to_string(dv);
        }

        cout << stoi(num) << endl;
    }
	
	return 0;
}