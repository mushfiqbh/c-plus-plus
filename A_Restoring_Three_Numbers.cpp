#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll scan[4];
	
    for(int i=0; i<4; i++){
        cin >> scan[i];
    }

    sort(scan, scan+4);
    
    cout << (scan[0]+scan[1]) - scan[3] << ' ';
    cout << (scan[0]+scan[2]) - scan[3] << ' ';
    cout << (scan[1]+scan[2]) - scan[3] << ' ';

	return 0;
}