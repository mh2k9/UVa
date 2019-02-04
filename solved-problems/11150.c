#include<stdio.h>

void main()
{
    int n,m,s,r=1;
    while(scanf("%d",&n)!=EOF)
    {
        s=n,r=1;
        while(r!=0)
        {
            r=n/3;
            m=n%3;
            if(r==0)
            {
                s+=m; break;
            }
            s+=r;
            n=r+m;
        }
        printf("%d\n",s-1);
    }
    return 0;
}
