// Problem Solver: Mushfiq R.
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        // Create and read the vector
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        // Check if all elements are the same and n is greater than 2
        set<int> unique_elements(a.begin(), a.end());
        if (unique_elements.size() == 1 && n > 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            // Create a string with 'R' repeated n times
            string s(n, 'R');
            // Modify the second character to 'B'
            s[1] = 'B';
            cout << "YES" << endl << s << endl;
        }
    }

    return 0;
}
