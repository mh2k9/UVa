#include<stdio.h>
int main()
{
    double n;
    while(1)
    {
        scanf("%lf",&n);
        if(n==0) break;
        if(n<=100) printf("f91(%.0lf) = 91\n",n);
        if(n>=101) printf("f91(%.0lf) = %.0lf\n",n,n-10);

    }
    return 0;
}
