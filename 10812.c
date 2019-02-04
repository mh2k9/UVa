#include<stdio.h>

void main()
{
    int cs;
    long s,d,b,sm;
    scanf("%d",&cs);
    while(cs--)
    {
        scanf("%ld %ld",&s,&d);
        if(s<d || (s+d)%2!=0 || (s-d)%2!=0)
        {
          printf("impossible\n");
        }
        else{
        b=(s+d)/2;
        sm=s-b;
        printf("%ld %ld\n",b,sm);
        }
    }

    return 0;
}
