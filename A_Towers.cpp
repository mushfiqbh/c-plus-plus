// Copyright: Mushfiq R.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, cnt=0, height=0;
    cin >> n;
    vector<int> nums(1001, 0);
    while(n--){
        int len;
        cin >> len;
        nums[len]++;
    }

    for(int i=0; i<1001; i++){
        if(nums[i] > height){
            height = nums[i];
        }
        if(nums[i] != 0){
            cnt++;
        }
    }

    cout << height << ' ' << cnt << endl;

	return 0;
}
