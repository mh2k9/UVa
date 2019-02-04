#include<stdio.h>
#include<math.h>
#define m 1000000
char prime[m+1];
void sieve()
{
    int i,j;
    for(i=2;i<=m;i++) prime[i]=1;
    for(i=2;i<=sqrt(m);)
    {
        for(j=2*i;j<=m;j+=i)
        prime[j]=0;
        i++;
        for(;!prime[i];i++);
    }
}

int main()
{
    long i,p,q,f;
    long n;
    sieve();
    while(1)
    {
        scanf("%ld",&n);
        if(n==0) break;
        f=0;p=0;q=0;
        for(i=2;i<=n;i++)
        {
            if(prime[i]==1 && prime[n-i]==1)
            {
                p=i;q=n-i;
                f=1;
                break;
            }
        }
        if(f==1) printf("%ld:\n%ld+%ld\n",n,p,q);
        else printf("%d:\nNO WAY!\n",n);
    }
    return 0;
}
