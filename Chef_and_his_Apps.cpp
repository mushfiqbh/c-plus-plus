#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, n;
    vector<int> vct;

    cin >> t;
    while(t--){
        vct.resize(0);
        for(int i=0; i<4; i++){
            cin >> n;
            vct.push_back(n);
        }

        if(vct[0]-vct[1]-vct[2] >= vct[3]){
            cout << 0 << endl;
        }else if(vct[0]-vct[1] >= vct[3] || vct[0]-vct[2] >= vct[3]){
            cout << 1 << endl;
        }else{
            cout << 2 << endl;
        }
    }
	
	return 0;
}