#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool lock = false;
    string st;

    cin >> st;
    for (char c : st)
    {
        if (lock)
        {
            lock = false;
            int n = (c == '.') ? 1 : 2;
            cout << n;
        }
        else
        {

            if (c == '.')
            {
                cout << 0;
            }
            else
            {
                lock = true;
            }
        }
    }

    return 0;
}