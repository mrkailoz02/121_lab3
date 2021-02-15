#include <stdio.h>
int main()
{
    int a[5][4],i,j,sum[5],win=0,p=0;
    for(i=0;i<5;i++)
    {
        sum[i]=0;
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
            sum[i]=sum[i]+a[i][j];
        }
        if(win<sum[i])
        {
            win=sum[i];
            p=i+1;
        }
    }
    printf("%d %d",p,win);
}
