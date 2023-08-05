#include<stdio.h>
int main()
{
    double a,b,c,perimetro,area;
    scanf("%lf%lf%lf", &a,&b,&c);
    if((a+b)>c && (b+c)>c && (a+c)>b)
    {
        perimetro = a+b+c;
        printf("Perimetro = %.1lf\n", perimetro);
    }
    else
    {
        area = .5*(a+b)*c;
        printf("Area = %.1lf\n", area);

    }
    return 0;
}
