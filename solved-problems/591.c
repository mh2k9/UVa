#include<stdio.h>

int main()
{
    int n,i,ave,sum,move,cs=1;
    while(1)
    {
        scanf("%d",&n);
        if(n==0) break;
        sum=0,move=0;
        int arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        ave=sum/n;
        for(i=0;i<n;i++)
        {
            if(ave<arr[i]) move+=arr[i]-ave;
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",cs++,move);
    }
    return 0;
}
