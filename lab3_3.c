#include<stdio.h>

int main()
{
    int k,i;
    scanf("%d",&k);
    if(k==1)
        printf("1\n");
    for(i=2;k>1;i++)
    {
        if(k%i==0)
        {
            k/=i;
            printf("%d\n",i);
            i=1;
        }
    }
    printf("0");
    return 0;
}
