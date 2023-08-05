#include<stdio.h>
int main()
{
    double R, pi, area;
    pi=3.14159;

    scanf("%lf", &R);

    area = (4/3.0)*pi*(R*R*R);

    printf("VOLUME = %.3lf\n", area);

    return 0;

}
