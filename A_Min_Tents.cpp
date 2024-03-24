#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int a, b, c, minTents;
        cin >> a >> b >> c;

        int leftoverb = b % 3;
        if (leftoverb + c >= 3 || leftoverb == 0)
        {
            minTents = a + ceil(1.0 * (b + c) / 3);
        }
        else
        {
            minTents = -1;
        }

        cout << minTents << endl;
    }

    return 0;
}
