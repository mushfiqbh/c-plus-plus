#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, px, py;
    cin >> n >> px;

    vector<bool> lz(n + 1, false);
    lz[0] = true;

    for (int i = 0; i < px; i++) {
        int x;
        cin >> x;
        lz[x] = true;
    }

    cin >> py;
    for (int i = 0; i < py; i++) {
        int y;
        cin >> y;
        lz[y] = true;
    }

    bool flag = true;
    for (int i = 1; i <= n; i++) {
        if (!lz[i]) {
            flag = false;
            break;
        }
    }

    cout << (flag ? "I become the guy." : "Oh, my keyboard!") << endl;

    return 0;
}