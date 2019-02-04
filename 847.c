#include<stdio.h>

int main()
{
    long double n;
    int i;
    while(scanf("%Lf",&n)==1)
    {
        for(i=1;;i++)
        {
            if(i%2==1) n/=9;
            else n/=2;
            if(n<=1) break;
        }
        if(i%2==1) printf("Stan wins.\n");
        else printf("Ollie wins.\n");
    }
    return 0;
}
