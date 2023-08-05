#include <stdio.h>
int main()
{
    float i, S = 0, J = 1.0;
    for (i = 1; i <= 39; i += 2)
    {
        S += i / J;
        J += (J + J);
    }
    printf("%.2f\n", S);
    return 0;
}