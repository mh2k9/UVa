#include<stdio.h>

long sq(long x)
{
    return x*x;
}
long bigMod(long b, long p, long m)
{
    if(p==0) return 1;
    else if(p%2==0)
    return sq(bigMod(b,p/2,m))%m;
    else return ((b%m)*bigMod(b,p-1,m))%m;
}
void main()
{
    long b,p,m,k;
    while(scanf("%ld %ld %ld",&b, &p, &m)!=EOF)
    {
        k=bigMod(b,p,m);
        printf("%ld\n",k);
    }
    return 0;
}
