#include <stdio.h>
int main()
{
    int a, n, i, j, m, k = 1, l;
    scanf("%d%d", &a, &n);
    m = n / a;
    l = a;
    for (i = 1; i <= m; i++)
    {
        printf("%d", k);
        for (j = k + 1; j <= l; j++)
        {
            printf(" %d", j);
        }
        printf("\n");
        k += a;
        l += a;
    }
    return 0;
}