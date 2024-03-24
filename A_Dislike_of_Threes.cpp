#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, k;
    vector<int> v;

    for(int i=1; i<=1666; i++){
        if(i%3!=0 && i%10!=3){
            v.push_back(i);
        }
    }

    cin >> t;
    while(t--){
        cin >> k;
        cout << v[k-1] << endl;
    }
	
	return 0;
}