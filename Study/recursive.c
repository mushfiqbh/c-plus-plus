#include <stdio.h>

int recurse(int n, int a, int b, int c)
{
    if (n <= 3)
    {
        return (n == 1) ? a : (n == 2) ? b : c;
    }

    int sum = a + b + c;
    return recurse(n - 1, b, c, sum);
}

int main()
{
    int n, a, b, c;
    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);
    int nthTerm = recurse(n, a, b, c);
    printf("%d", nthTerm);

    return 0;
}
