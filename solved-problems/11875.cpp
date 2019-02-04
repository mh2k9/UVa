#include<stdio.h>
int main(void)
{
    int csn,ply,p,k,c=1;
    scanf("%d",&csn);
    while(csn--)
    {
        scanf("%d",&ply);
        int arr[ply];
        for(int i=0;i<ply;i++)
        scanf("%d",&arr[i]);
        p=ply-1;
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<p-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    k=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=k;
                }
            }
        }
        printf("Case %d: %d\n",c++,arr[ply/2]);
    }
}
