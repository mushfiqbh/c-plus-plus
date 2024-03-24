#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long arr[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<long long> vct(n + 1, 0);
        for (long long i = 0; i < n; i++)
        {
            vct[arr[i]]++;
        }
        
        long long res = 0;
        bool toggle = true;
        for (long long i = 0; i <= n; i++)
        {
            if (vct[i] == 0)
            {
                res = i;
                break;
            }
            else if (vct[i] == 1)
            {
                if (toggle)
                {
                    toggle = false;
                }
                else
                {
                    res = i;
                    break;
                }
            }
        }
        cout << res << endl;
    }
}
