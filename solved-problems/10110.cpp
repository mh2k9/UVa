#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,p;
    double m,r;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0)break;
        m=sqrt(n);
        p=m;
        r=m-p;
        if(r==0)printf("yes\n");
        else printf("no\n");
    }

    return 0;
}
