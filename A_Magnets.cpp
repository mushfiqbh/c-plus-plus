#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, n, m=0, count=0;

    cin >> t;
    while(t--){
        cin >> n;
        if(n != m){
            count++;
        }
        m = n;
    }
	
    cout << count;
    
	return 0;
}