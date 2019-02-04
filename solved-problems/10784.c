#include<stdio.h>
#include<math.h>

int main()
{
    long n,gon;
    int cs=1;
    while(1)
    {
        scanf("%ld",&n);if(n==0)break;
        gon=ceil((3+sqrt(9+8*n))/2);
        printf("Case %d: %ld\n",cs++,gon);
    }
    return 0;
}
