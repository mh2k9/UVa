#include<stdio.h>

int main()
{
    long long mul,max;
    int n,i,j,k=1;
    while(scanf("%d",&n)==1)
    {
        int arr[n];
        for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        for(i=0,max=0;i<n;i++)
        {
            for(j=i,mul=1;j<n;j++)
            {
                mul*=arr[j];
                if(mul>max) max=mul;
            }
        }
        printf("Case #%d: The maximum product is %lld.\n\n",k++,max);
    }
    return 0;
}
