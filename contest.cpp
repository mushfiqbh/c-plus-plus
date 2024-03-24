#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string s;
    cin >> n >> s;

    unordered_set<char> seen;
    for (char &c : s)
    {
        c = tolower(c);
        seen.insert(c);
    }

    if (seen.size() == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}