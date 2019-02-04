#include<stdio.h>
long num1[1000100],num2[1000100];
void main()
{
    long i,n,m,sum;
    scanf("%ld",&n);
    while(n--)
    {
        scanf("%ld",&m);
        for(i=0;i<m;i++)
            scanf("%ld %ld",&num1[i],&num2[i]);
        sum=0;
        for(i=m-1;i>=0;i--)
        {
            sum=sum+num1[i]+num2[i];
            num1[i]=sum%10;
            sum/=10;
        }
        for(i=0;i<m;i++)
            printf("%ld",num1[i]);
        if(n==0)
        printf("\n");
        else printf("\n\n");
    }
}
