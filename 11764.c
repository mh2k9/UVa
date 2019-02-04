#include<stdio.h>

void main()
{
    int n,m,c=1,i,h,l;
    scanf("%d",&n);
    while(n--)
    {
        h=0,l=0;
        scanf("%d",&m);
        int arr[m];
        scanf("%d",&arr[0]);
        for(i=1;i<m;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i-1]<arr[i]) h++;
            else if(arr[i-1]>arr[i]) l++;
        }
        printf("Case %d: %d %d\n",c++,h,l);
    }
    return 0;
}
