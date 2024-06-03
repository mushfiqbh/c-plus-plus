// Problem Solver: Mushfiq R.
#include <iostream>
#include <algorithm>
using namespace std;

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
        string str;
        cin >> n;
        cin >> str;

        string unsorted = str;
        sort(str.begin(), str.end());
        if(str == unsorted){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
