#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, s;

    cin >> t;
    while(t--){
        bool flag=true;
        string s;
        cin >> s;
        int n = s.length();

        if(n % 2 == 0){
            for(int i=0; i<n/2; i++){
                if(s[i] != s[i+n/2]){
                    flag = false;
                    break;
                }
            }
        }else{
            flag = false;
        }

        cout << (flag ? "YES" : "NO") << endl;
    }
	
	return 0;
}