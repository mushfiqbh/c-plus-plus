#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, n, x, count;
	
	cin >> t;
	while(t--){
	    cin >> n;
	    count = 0;
	    while(n--){
	        cin >> x;
	        if(x >= 10 && x <= 60){
                count++;
            }
	    }
        cout << count << endl;
	}
	
	return 0;
}