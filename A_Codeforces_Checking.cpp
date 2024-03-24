#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
    string ch = "codeforces";

    cin >> t;
    while(t--){
        char n;
        cin >> n;
        bool found = false;
        for(char c : ch){
            if(c == n){
                cout << "YES" << endl;
                found = true;
                break;
            }
        }
        if(!found){
            cout << "NO" << endl;
        }
    }
	
	return 0;
}