#include <stdio.h>

int rec(int a)
{
    if (a % 2 == 0 && a < 1)
    {
        return 2;
    }

    int b = a + 1;
    int ans = rec(a - 3) + b;
    return ans;
}

int main()
{
    int ans = rec(9);
    printf("%d", ans);

    return 0;
}

// // I
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     for (int i = n; i >= -n; i--)
//     {
//         if (i == 0)
//             i -= 2;
//         for (int j = n; j >= -n; j--)
//         {
//             if (j == 0)
//                 j -= 2;
//             if (abs(j) > abs(i))
//                 printf("%d ", abs(j));
//             else
//                 printf("%d ", abs(i));
//         }
//         printf("\n");
//     }
//     return 0;
// }