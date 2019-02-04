#include<stdio.h>

void main()
{
    long n;
    long p,q;
    scanf("%ld",&n);
    while(n--)
    {
        scanf("%ld %ld",&p,&q);
        printf("%ld\n",(p/3*q/3));
    }

}
