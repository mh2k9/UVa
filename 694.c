#include<stdio.h>
void main()
{
    long int a,b,r;
    int csn=1,count=1;
    while(1)
    {
        scanf("%ld %ld",&a,&b);
        if(a<0 && b<0) break;
        r=a;
        while(a!=1)
        {
            if(a%2==0)
            a=a/2;
            else a=(a*3)+1;
            if(a>b) break;
            count++;
        }
        printf("Case %d: A = %ld, limit = %ld, number of terms = %ld\n",csn++,r,b,count);
        count=1;
    }
    return 0;
}
