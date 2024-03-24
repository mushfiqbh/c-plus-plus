#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, arr[3] = {0, 0, 0};

    cin >> n;
    while(n--){
        int x, y, z;
        cin >> x >> y >> z;
        arr[0] += x;
        arr[1] += y;
        arr[2] += z;
    }

    if(arr[0]==0 && arr[1]==0 && arr[2]==0){
        cout << "YES";
    }else{
        cout << "NO";
    }
	
	return 0;
}