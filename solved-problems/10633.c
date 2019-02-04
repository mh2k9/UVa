#include<stdio.h>

int main()
{
    unsigned long long n,x;
    while(1)
    {
        scanf("%llu",&n);
        if (n==0) break;
        x=(n*10)/9;
        if(n%9==0) printf("%llu %llu\n",x-1,x);
        else printf("%llu\n",x);
    }
    return 0;
}
