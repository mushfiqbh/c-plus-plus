#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool a_in_b(string a, string b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, n;

    string a = "ncpc";
    string b = "ncpcd";
    bool s = a_in_b(a, b);
    cout << s;

    // cin >> t;
    // while(t--){
    //     cin >> n;
    //     string str[n];
    //     for(int i=0; i<n; i++){
    //         cin >> str[i]
    //     }

    //     int m;
    //     cin >> m;
    //     for(int i=0; i<m; i++){
    //         cin >> s
    //     }
    // }
	
	return 0;
}