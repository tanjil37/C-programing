#include<stdio.h>
int main()
{
    int n,x,i;
    int in=0,out=0;
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x>=10 && x<=20)
        {
            in++;
            /* code */
        }
        else
        {
            out++;
            /* code */
        }

        /* code */
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
    
}