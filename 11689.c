#include<stdio.h>

void main()
{
    int e,f,l,csn,c,r,s,m;
    scanf("%d",&csn);
    while(csn--)
    {
        scanf("%d %d %d",&e,&f,&l);
        s=e+f;
        c=0,r=1;
        while(r!=0)
        {
            r=s/l;
            c=c+r;
            m=s%l;
            s=r+m;
        }
        printf("%d\n",c);
    }
    return 0;
}
