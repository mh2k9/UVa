#include<stdio.h>
int main()
{
    long unsigned a,b,s;
    int n,i;
    while(1)
    {
        scanf("%d",&n);
        if(n==-1) break;
        if(n==0) printf("0 1\n");else {
        a=1;
        b=2;
        s=0;
        for(i=0;i<n;i++)
        {
          s=a+b;
          a=b;
          b=s;
        }
        printf("%lu %lu\n",a-1,s-1);
    }
    }
    return 0;
}
