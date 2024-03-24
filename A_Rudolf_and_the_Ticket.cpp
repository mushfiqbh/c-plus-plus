#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, n, m, k;

    cin >> t;
    while(t--){
        cin >> n >> m >> k;
        int count=0;
        int arr1[n];
        int arr2[m];
        
        for(int i=0; i<n+m; i++){
            if(i < n){
                cin >> arr1[i];
            }else{
                cin >> arr2[i-n];
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr1[i] + arr2[j] <= k){
                    count++;
                }
            }
        }
        cout << count << endl;
    }
	
	return 0;
}