#include<stdio.h>
#include<math.h>

int prime(long n)
{
    int i,b=1;
    for(i=sqrt(n)+1;i>1;i--)
    {
        if(n%i==0)
        {
            b=0;
            break;
        }

    }
    return b;
}

void main()
{
    long n,i;
    while(1)
    {
        scanf("%ld",&n);
        if(n==0) break;
        for(i=n-2;i>2;i--)
        {
            if(prime(i)==1 && prime(n-i)==1 && i+(n-i)==n)
            {
                printf("%ld = %ld + %ld\n",n,n-i,i);
                break;
            }

        }
        if(i==2) printf("Goldbach's conjecture is wrong.\n");
    }

    return 0;
}
