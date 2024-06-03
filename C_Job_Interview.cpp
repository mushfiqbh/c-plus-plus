// Problem Solver: Mushfiq R.
#include <iostream>
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
        int n, m;
        cin >> n >> m;
        int coder[m + n + 1];
        int tester[m + n + 1];

        for (int i = 0; i < m + n + 1; i++)
        {
            cin >> coder[i];
        }

        for (int i = 0; i < m + n + 1; i++)
        {
            cin >> tester[i];
        }

        for (int i = 0; i < m + n + 1; i++)
        {
            int point = 0, mfilled = 0, nfilled = 0;
            for (int j = 0; j < m + n + 1; j++)
            {
                if (i != j)
                {
                    if (mfilled < m)
                    {
                        if (coder[j] > tester[j])
                        {
                            point += coder[j];
                            mfilled++;
                            // cout << mfilled << '.';
                        }
                        else
                        {
                            point += tester[j];
                            nfilled++;
                            // cout << nfilled << '.';
                        }
                    }
                    else if (nfilled < n)
                    {
                        point += tester[j];
                        nfilled++;
                    }
                }
            }

            cout << point << ' ';
        }
        cout << "\n";
    }

    return 0;
}
