#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, n, a, b, total;

    cin >> t;
    while(t--){
        total = 0;
        cin >> n >> a >> b;
        for(int i=1; i <= n; i++){
            if(i%2==0){
                total += a;
            }else{
                total += b;
            }
        }
        cout << total << endl;
    }
	
	return 0;
}