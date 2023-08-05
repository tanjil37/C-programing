#include <stdio.h>

int main()
{
    int i, n = 0, t, p, v, a, b;
    scanf("%d %d", &t, &a);
    for (i = 1; i < t; i++)
    {
        n++;
        scanf("%d", &b);
        if (i == 0)
        {
            if (a < b)
            {
                v = a;
                p = n;
            }
            else
            {
                v = b;
                p = n;
            }
        }
        else
        {
            if (b < v)
            {
                v = b;
                p = n;
            }
        }
    }
    printf("Menor valor: %d\n", v);
    printf("Posicao: %d\n", p);
    return 0;
}