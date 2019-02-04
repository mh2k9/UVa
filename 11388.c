#include<stdio.h>
void main()
{
    int n;
    long a,b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%ld %ld",&a,&b);
        if(b%a==0) printf("%ld %ld\n",a,b);
        else printf("-1\n");
    }
    return 0;
}
