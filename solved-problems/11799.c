#include<stdio.h>
void main()
{
    int csn,n,i,f,k=0;
    scanf("%d",&csn);
    while(csn--)
    {
        scanf("%d",&n);
        int arr[n];
        scanf("%d",&arr[0]);
        f=arr[0];
        for(i=1;i<n;i++)
        {
         scanf("%d",&arr[i]);
         if(f>arr[i])
         f=f;
         else f=arr[i];
        }
        printf("Case %d: %d\n",++k,f);
        f=0;
    }
    return 0;
}
