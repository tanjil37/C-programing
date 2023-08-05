#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 9; i = i + 2)
    {
        for (j = 7; j >= 5; j--)
        {
            printf("I=%d J=%d\n", i, j);
        }
    }
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int I,J;
//     for(I=1;I<=9;I=I+2)
//     {
//         for(J=7;J>=5;J--)
//             printf ("I=%d J=%d\n",I,J);
//     }
//     return 0;
// }