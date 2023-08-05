#include<stdio.h>
int main(){
    int i,p;


    for ( i = 0; i < 100; i++)

    {
        scanf("%d", &p);
        if (p==2002)

        {
            printf("Acesso Permitido\n");

        }
        else
        {
            printf("Senha Invalida\n");
            /* code */
        }
        if (p==2002)
        {
            break;
            /* code */
        }




    }
    return 0;

}
