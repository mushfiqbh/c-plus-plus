#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, a, b, m=0, c=0;

    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a > b){
            m++;
        }else if(a < b){
            c++;
        }
    }

    if(m > c){
        cout << "Mishka";
    }else if(c > m){
        cout << "Chris";
    }else{
        cout << "Friendship is magic!^^";
    }
	return 0;
}