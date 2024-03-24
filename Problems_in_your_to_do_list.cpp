#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, n, num, count;

    cin >> t;
    while(t--){
        count = 0;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> num;
            if(num >= 1000){
                count++;
            }
        }

        cout << count << endl;
    }
	
	return 0;
}