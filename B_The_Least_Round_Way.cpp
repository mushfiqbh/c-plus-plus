#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
using namespace std;

typedef unsigned long long int llu;
typedef pair<llu, string> Path;

Path tpath[1000], fpath[1000];

Path operator+(const Path &first, const Path &second)
{
    llu x = first.first + second.first;
    string y = first.second + second.second;
    return make_pair(x, y);
}

llu count_divisor(llu num, int div)
{
    llu count = 0;
    for (; num != 0 && num % div == 0; num /= div)
        count++;
    return count;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    fill(tpath, tpath + 1000, make_pair(0, ""));
    fill(fpath, fpath + 1000, make_pair(0, ""));

    pair<int, int> zero = make_pair(-1, -1);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            llu num;
            scanf("%llu", &num);
            if (!num)
                zero = make_pair(i, j);

            llu two = count_divisor(num, 2);
            llu five = count_divisor(num, 5);

            if (i == 0 && j == 0)
            {
                tpath[j].first = two;
                fpath[j].first = five;
                continue;
            }

            bool down = i != 0 && (j == 0 || tpath[j].first < tpath[j - 1].first);
            tpath[j] = (down ? tpath[j] : tpath[j - 1]) + make_pair(two, down ? "D" : "R");
            down = i != 0 && (j == 0 || fpath[j].first < fpath[j - 1].first);
            fpath[j] = (down ? fpath[j] : fpath[j - 1]) + make_pair(five, down ? "D" : "R");
        }

    Path path = tpath[n - 1].first < fpath[n - 1].first ? tpath[n - 1] : fpath[n - 1];
    if (zero.first != -1 && path.first)
    {
        path = make_pair(1, "");
        path.second += string(zero.first, 'D');
        path.second += string(zero.second, 'R');
        path.second += string(n - zero.first - 1, 'D');
        path.second += string(n - zero.second - 1, 'R');
    }
    cout << path.first << endl
         << path.second << endl;
}
