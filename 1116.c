#include <stdio.h>
int main()
{
    int i, x;
    float m, n;

    scanf("%d", &x);
    for (i = 1; i <= x; i++)
    {
        scanf("%f%f", &m, &n);
        if (m == 0 && n == 0)
            printf("0.0\n");
        else if (m == 0)
            printf("0.0\n");
        else if (n == 0)
            printf("divisao impossivel\n");
        else
            printf("%.1f\n", m / n);
    }

    return 0;
}