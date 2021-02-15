#include<stdio.h>

int main()
{
    long a,b,c;
    scanf("%ld",&a);
    b = a;
    c = a;
    int i,n;
    for(i=0;b>0;i++)
    {
        b/=10;
    }
    n = i;
    int y[n];
    for(i=1;i<=n;i++)
    {
        y[n-i]=a%10;
        a/=10;
    }
    int m=0;
    if(y[0]==1 && y[n-1]==0)
    {
        c-=1;
        for(i=1;i<n;i++)
        {
            y[n-i]=c%10;
            c/=10;
            m++;
        }
    }
    int x[m];
    for(i=0;i<m;i++)
    {
        x[i] = y[i+1];
        printf("%d ",x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(x[i]>x[n-i-1])
        {
            int z=2;
            while(1)
            {
                if(x[n-i-z]==0)
                {
                    x[n-i-z] = 9;
                }
                else
                {
                    x[n-i-z]--;
                    if(x[0]==0)
                        i++;
                    break;
                }
                z++;
            }
        }
        x[n-i-1] = x[i];
        printf("%d",x[i]);
    }
    return 0;
}
