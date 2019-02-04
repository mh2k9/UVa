#include<stdio.h>

void main()
{
    long a,b;
    while(scanf("%ld %ld",&a,&b)!=EOF)
    printf("%ld\n",(a^=b));
    return 0;
}
