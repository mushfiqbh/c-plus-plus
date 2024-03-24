#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, nums[3];

    cin >> t;
    while(t--){
        bool iss = false;
        for(int i=0; i<3; i++){
            cin >> nums[i];
        }

        for(int i=0; i<3; i++){
            if((nums[0]+nums[1]+nums[2])-nums[i] == nums[i]){
                iss = true;
                break;
            }
        }

        cout << (iss ? "YES" : "NO") << endl;
    }
	
	return 0;
}