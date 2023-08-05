#include<stdio.h>
int main()
{
    int t,x,y,sum=0;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d%d",&x,&y);
        if (x%2==0)
        x++;
        for(int j=0; j<y; j++)
        {
             sum+=x;
             x+=2;
        }
        printf("%d\n", sum);
        sum=0;
    }
    return 0;
}