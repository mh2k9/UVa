#include<stdio.h>

void main()
{
    int n,p,q,r,count,s;
    while(1)
    {
        scanf("%d",&n);
        if(n==0) break;
        p=0,q=0,r=0,count=0,s=0;
        while(n>1)
        {
            p=n/3;
            q=n%3;
            count=count+p;
            r=p+q;
            if(n==2){count++;break;}
            n=r;
        }
        printf("%d\n",count);
    }

    return 0;
}
