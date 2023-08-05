#include <stdio.h>
int main()
{
    int x, i, alcohol = 0, gas = 0, disel = 0;
    for (i = 0; i < 100; i++)
    {
        scanf("%d", &x);

        if (x == 1)
            alcohol++;
        else if (x == 2)
            gas++;
        else if (x == 3)
            disel++;
        else if (x == 4)
            break;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcohol);
    printf("Gasolina: %d\n", gas);
    printf("Diesel: %d\n", disel);
    return 0;
}