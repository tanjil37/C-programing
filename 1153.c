#include <stdio.h>
int main()
{
    int n, i, result = 1;
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {

        result = result * i;
    }
    printf("%d\n", result);
    return 0;
}