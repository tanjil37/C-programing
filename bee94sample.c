#include<stdio.h>
int main()
{
    int m,n,i,sum=0, sum1 =0, sum2=0,sum3;
    char a;
    float e,f,g;


    scanf("%d",&m);
    for ( i = 0; i < m; i++)
    {
        scanf("%d%c", &n,&a);
        if ('C'==a)
        {
            sum = sum + n;

        }
        if ('R'==a)
        {
            sum1 = sum1 + n;

        }
        if ('S'==a)
        {
            sum2 = sum2 + n;

        }

    }
    sum3 = sum + sum1 + sum2;
    e = (sum*100.00)/(sum3*1.00);
    f = (sum1*100.00)/(sum3*1.00);
    g = (sum2*100.00)/(sum3*1.00);

    printf("Total: %d cobaias\n", sum3);
    printf("Total de coelhos: %d\n", sum);
    printf("Total de ratos: %d\n", sum1);
    printf("Total de sapos: %d\n", sum2);

    printf("Percentual de coelhos: %.2f %%\n", e);
    printf("Percentual de ratos: %.2f %%\n", f);
    printf("Percentual de sapos: %.2f %%\n", g);

    return 0;

}

