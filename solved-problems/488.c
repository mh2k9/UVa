#include<stdio.h>

void main()
{
    int csn,w,h,i,j,k,p,q,f,v=0;
    scanf("%d",&csn);
    f=csn;
    while(csn--)
    {
        scanf("%d %d",&w,&h);
        p=w,q=h;
        for(k=0;k<q;k++)
        {
        if(v!=0) printf("\n");
        v=1;
        for(i=1;i<=p;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d",i);
            }
            printf("\n");
        }
        for(i=p-1;i>=1;i--)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d",i);
            }
            printf("\n");
        }
        }
    }
    return 0;
}

