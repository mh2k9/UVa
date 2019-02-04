#include<stdio.h>
#include<math.h>

long divisor(long n)
{
    long len,i,count=2;
    len=sqrt(n);
    for(i=2;i<=len;i++)
    {
        if(n%i==0)
        count+=2;
    }
    if(len*len==n) count--;
    return count;
}
void main()
{
    long n,a,b,i,h,l,temp=0,count,num,c;
    scanf("%ld",&n);
    while(n--)
    {
        scanf("%ld %ld",&a,&b);
        temp=count=num=0;
        if(a==1 && b==1)
        {
            c=1;
            num=1;
        }
        else
        {
            if(a>b){l=b;h=a;}
            else {l=a;h=b;}
            num=l;
            for(i=l;i<=b;i++)
            {
               count=divisor(i);
               if(count>temp)
               {
                   c=count;
                   temp=count;
                   num=i;
               }
            }
        }
       printf("Between %ld and %ld, %ld has a maximum of %ld divisors.\n",a,b,num,c);
    }
}
