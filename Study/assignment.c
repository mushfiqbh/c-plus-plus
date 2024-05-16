/**
 * L - Printing Tokens
 * Mushfiq (295)
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char txt[1000];
    scanf("%[^\n]", txt);

    for (int i = 0; i < strlen(txt); i++){
        if (txt[i] == ' '){
            printf("%c", '\n');
        }
        else{
            printf("%c", txt[i]);
        }
    }

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