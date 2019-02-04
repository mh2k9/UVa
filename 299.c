#include<stdio.h>

void main()
{
    int n,m;
    int i,j,swap,t;
    scanf("%d",&m);
    while(m--)
    {
        swap=0;
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        for(i=0;i<n-1;i++)
        {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
                swap++;
            }
        }
    }
    printf("Optimal train swapping takes %d swaps.\n",swap);
    }

    return 0;
}
