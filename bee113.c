#include<stdio.h>
int main()
{
    int x, y,i;

    for ( i = 0; i < 100; i++)
    {
    scanf("%d%d", &x,&y);
    if (x<y)
    {
        printf("Crescente");
    }
    else if (x>y)
    {
        printf("Decrescente\n");

    }
    else if(x==y){
        break;
    }
}
    
    
    
    

}