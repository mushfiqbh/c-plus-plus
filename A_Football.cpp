// Mushfiqbh
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c = 1;
    cin >> n;
    vector<string> a(n + 1);
    a[n] = "NO";
    cin >> a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == a[0])
            c++;
        else
            a[n] = a[i];
    }
    if (c > n - c)
        cout << a[0];
    else
        cout << a[n];

    return 0;
}