#include <stdio.h>
int main()
{
    int n,i,x,y,temp,sum=0;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d%d", &x,&y);
        if (x>y)
        {
            temp=x;
            x=y;
            y=temp;
            
        }
        if(x%2==0) x--;
        x+=2;

        for(int j=x; j<y; j+=2)
        {
            sum+=j;
        }
        
        printf("%d\n", sum);
        sum=0;
    }
    
    return 0;
}