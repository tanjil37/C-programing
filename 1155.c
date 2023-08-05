#include <stdio.h>
int main()
{
    float i, S = 0, J = 1.0;
    for (i = 1; i <= 100; i++)
    {
        S += J / i;
       
    }
    printf("%.2f\n", S);
    return 0;
}