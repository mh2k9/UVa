#include<stdio.h>
#include<math.h>

void main()
{
    long c,i,sum,j,min,m,k,l,flag=0,p,q;
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        int arr[a];
        for(i=0;i<a;i++)
        {
            scanf("%ld",&arr[i]);
        }
        scanf("%ld",&sum);

        min=2147483647;
        for(i=0;i<a-1;i++)
        {
            for(j=i+1;j<a;j++)
            {
               if(arr[i]+arr[j]==sum)
               {
                       m=abs(arr[i]-arr[j]);
                       if(m<min)
                       {
                           min=m;
                           if(arr[i]>arr[j])
                            {
                                p=arr[i];
                                q=arr[j];
                            }
                            else
                            {
                                p=arr[j];
                                q=arr[i];
                            }
                       }
               }
            }
        }
        printf("Peter should buy books whose prices are %ld and %ld.\n\n",q,p);
    }
}
