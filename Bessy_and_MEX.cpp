// Copyright: Mushfiq R.
#include <iostream>
#include <vector>
using namespace std;

int mex(vector<int> arr);
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
    cin >> t;
	while (t--)
	{
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            for(int j=0; j<)
        }
	}

	return 0;
}


int mex(vector<int> arr) {
    N = arr.length();
    int freq[N + 1];
    for (int i = 0; i <= N; i++) {
        freq[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        if (arr[i] >= 0 && arr[i] <= N) {
            freq[arr[i]]++;
        }
    }

    int mex = 0;
    for (int i = 0; i <= N; i++) {
        if (freq[i] == 0) {
            mex = i;
            break;
        }
    }

    return mex;
}