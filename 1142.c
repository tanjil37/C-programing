#include <stdio.h>
int main()
{
    int i, num, m = 1, n = 2, o = 3;

    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        printf("%d %d %d PUM\n", m, n, o);
        m += 4;
        n += 4;
        o += 4;
    }
    return 0;
}