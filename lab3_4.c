#include<stdio.h>

int main()
{
    long p,i,j,n;
    scanf("%ld",&p);
    for(i=1;i<=p;i++)
    {
        for(j=2;j<=p;j++)
        {
            if(i%j==0 && j!=i)
                break;
            else if(i%j==0 && j==i)
                n = i;
        }
    }
    printf("%ld",n);
    return 0;
}
