#include<stdio.h>
int main()
{
    double n;
    int a,b,c,d,e,f,g,h,i,j,k,l;

    scanf("%d", &n);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100,00\n", (x/100));
    x = x%100;
    printf("%d nota(s) de R$ 50,00\n", x/50);
    x=x%50;
    printf("%d nota(s) de R$ 20,00\n", x/20);
    x=x%20;
    printf("%d nota(s) de R$ 10,00\n", x/10);
    x=x%10;
    printf("%d nota(s) de R$ 5,00\n", x/5);
    x=x%5;
    printf("%d nota(s) de R$ 2,00\n", x/2);
    x=x%2;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", x/1);
    x=x%1;
    printf("%d moeda(s) de R$ 0.50\n", x/0.50);
    x=x%0.5;
    printf("%d moeda(s) de R$ 0.25\n", x/0.25);
    x=x%0.25;
    printf("%d moeda(s) de R$ 0.10\n", x/0.1);
    x=x%0.1;
    printf("%d moeda(s) de R$ 0.05\n", x/0.05);
    x=x%0.05;
    printf("%d moeda(s) de R$ 0.01\n", x);

    return 0;
}

