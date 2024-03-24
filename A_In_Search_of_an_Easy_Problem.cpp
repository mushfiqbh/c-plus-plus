#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, x, ishard=0;

    cin >> n;
    while(n--){
        cin >> x;
        if(x == 1){
            ishard = 1;
        }
    }

    if(ishard){
        cout << "HARD";
    }else{
        cout << "EASY";
    }

	return 0;
}