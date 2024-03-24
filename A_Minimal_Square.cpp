#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, a, b;

    cin >> t;
    while(t--){
        cin >> a >> b;

        if(a == b){
            cout << (a+b) * (a+b) << endl;
        }else{
            int minn = min(a, b);
            int maxx = max(a, b);
            if(minn*2 >= maxx){
                cout << (minn * minn) * 4 << endl;
            }else{
                cout << (maxx * maxx) << endl;
            }
        }
    }
	
	return 0;
}