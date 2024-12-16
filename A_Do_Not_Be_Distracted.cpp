// Author: Mushfiq R.
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define vsort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<int>())
#define fastIO() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        unordered_set<char> visited;
        
        bool flag = true;
        for(int i = 0; i < n; i++){
            if(visited.count(s[i]) == 0){
                visited.insert(s[i]);
            }else if(s[i-1] != s[i]){
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}