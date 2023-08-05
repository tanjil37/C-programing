#include <stdio.h>
int main()
{
    int i, num, m = 1, n = 1, o = 1, e, f;

    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {

        n = (i * i);
        o = (i * i * i);
        printf("%d %d %d\n", i, n, o);
        e = n + 1;
        f = o + 1;
        printf("%d %d %d\n", i, e, f);
    }
    return 0;
}