#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string a, b, c;
    getline(cin, a);
    getline(cin, b);
    
    for(int i=a.length()-1; i>=0; i--){
        c += a[i];
    }

    if(b == c){
        cout << "YES";
    }else{
        cout << "NO";
    }

	return 0;
}