#include<stdio.h>

void main()
{
    int n,m,x,y,i=0;

    while(1)
    {
        scanf("%d",&m);
        if(m==0) break;
        n=0; x=1,y=0,i=0;
        while(x>0)
        {
            if(i==m) break;
        y=n+x;
        n=x; x=y;
        i++;
        }
        printf("%d\n",y);
    }

    return 0;
}
