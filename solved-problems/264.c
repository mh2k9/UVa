#include<stdio.h>

int a[10000001],b[10000001],i,j,p,q;
long n=1;

void georgCantor()
{
    for(i=1;i<=4476;i++)
    {
        if(i%2==0)
        {
            p=1;q=i;
            for(j=1;j<=i;j++)
            {
                if(n>10000000) break;
                a[n]=p;b[n]=q;
                p++;q--;n++;
            }
        }
        else
        {
            p=i;q=1;
            for(j=i;j>=1;j--)
            {
                if(n>10000000) break;
                a[n]=p;b[n]=q;
                p--;q++;n++;
            }
        }
    }
}
void main()
{
    georgCantor();
    long x;
    while(scanf("%ld",&x)==1)
    {
        printf("TERM %ld IS %d/%d\n",x,a[x],b[x]);
    }
}
