#include <stdio.h>
int main()
{
    int i, num, m = 1, n = 1, o = 1;

    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        printf("%d %d %d PUM\n", m, n, o);
        m += 1;
        n = (m * m);
        o = (m * m * m);
    }
    return 0;
}