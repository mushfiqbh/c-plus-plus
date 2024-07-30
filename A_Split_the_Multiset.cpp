#include <iostream>
#include <cmath>

using namespace std;

int minOperations(int n, int k)
{

    if (n == 1)
        return 0;

    int operations = 0;

    while (n > 1)
    {

        int splits = min(k, n);

        operations++;

        n = ceil(n / splits);
    }

    return operations;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        cout << minOperations(n, k) << endl;
    }

    return 0;
}