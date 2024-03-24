#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
    bool isit;
    string st;

    cin >> t;
    while (t--)
    {
        cin >> st;
        isit = false;
        if(st[0] == 'Y' || st[0] == 'y'){
            if(st[1] == 'E' || st[1] == 'e'){
                if(st[2] == 'S' || st[2] == 's'){
                    isit = true;
                }
            }
        }

        if(isit){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

	return 0;
}