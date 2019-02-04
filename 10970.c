#include<stdio.h>

int main()
{
    int r,c;
    while(scanf("%d %d",&r,&c)==2)
    {
        printf("%ld\n",(r*c)-1);
    }
    return 0;
}
