#include <stdio.h>
int main()
{

    int i = 0, n;
    float d, a = 0;
    while (1)
    {
        scanf("%d", &n);
        if (n < 0)
        {
            break;
        }
        i += n;
        a++;
    }
    d = i / a;

    printf("%.2f\n", d);
    return 0;
}