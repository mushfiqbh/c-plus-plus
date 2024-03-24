#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int zero=0, one=0, maxx=0;
	string s;
    cin >> s;

    for(char c : s){
        if(c == '0'){
            zero++;
            maxx = max(maxx, one);
            one = 0;
        }else{
            one++;
            maxx = max(maxx, zero);
            zero = 0;
        }
    }
    maxx = max(maxx, max(one, zero));

    cout << (maxx >= 7 ? "YES" : "NO");
	
	return 0;
}