#include<stdio.h>
#include<math.h>
long a,b;
int isPrime(long n)
{
    long len=sqrt(n),i;
    int flag=0;
    for(i=len;i>=2;i--)
    {
        if(n%i==0)
        return 1;
    }
    return 0;
}

void divide(long n)
{
    if(n==4)
    {
        a=b=2;
    }
    else if(n==5)
    {
        a=2;b=3;
    }
    long i;
    for(i=3;i<=n/2;i+=2)
    {
        if(isPrime(i)==0 && isPrime(n-i)==0)
        {
            a=i;b=n-i;
            break;
        }
    }
}

void main()
{
    long n,p,q;

    while(scanf("%ld",&n)==1)
    {
        if(n<8) printf("Impossible.\n");
        else
        {
        p=q=n/2;
        if(n%2) q++;
        if(p%2){p++;q--;}
        if(q%2==1)
        {
            p=p+q-5;
            q=5;
        }

        if(p==q)
        {
            divide(p);
            printf("%ld %ld %ld %ld\n",a,a,b,b);
        }
        else
        {
            divide(p);
            printf("%ld %ld ",a,b);
            divide(q);
            printf("%ld %ld\n",a,b);
        }

        }
    }
}
