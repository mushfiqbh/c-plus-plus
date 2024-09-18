// Author: Mushfiq R.
#include <iostream>
#include <vector>
#include <cmath>
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
        cin >> n;
        string txt;
        string vowels = "aeiou";
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < n / 5 + (i < n % 5); j++)
            {
                txt += vowels[i];
            }
        }
        cout << txt << endl;
    }

    return 0;
}
