#include <iostream>
#include <algorithm> // For std::min

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n], b[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i <= n; i++)
        cin >> b[i];

    int pehle = 0;
    int mini = numeric_limits<int>::max(); // Initialize 'mini' with a large value

    int last = b[n];
    bool flag = false;

    for (int i = 0; i < n; i++) {
        pehle += abs(a[i] - b[i]);

        if ((last >= a[i] && last <= b[i]) || (last >= b[i] && last <= a[i]))
            flag = true;

        mini = min({abs(last - a[i]), abs(b[i] - last), mini});
    }

    if (flag)
        cout << pehle + 1 << endl;
    else
        cout << pehle + mini + 1 << endl;

    return 0;
}
