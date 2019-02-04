#include<stdio.h>
#include<math.h>
#define M 1900000000
char prime[M];
int twin[1000000];

void sieve()
{
    long i,len,k;
    len=sqrt(M);
    for(i=2;i<=M;i++) prime[i]=1;
    for(i=2;i<=len;)
    {
        for(k=2*i;k<=M;k+=i) prime[k]=0;
        i++;
        for(;!prime[i];i++);
    }
}

void twinPrime()
{
    long i,k=1;
    for(i=3;i<=M;i+=2)
    {
        if(prime[i]==1 && prime[i+2]==1)
        twin[k++]=i;
    }
}

int main()
{
    long n;
    sieve(); twinPrime();
    while(scanf("%ld",&n)==1)
    {
        printf("(%d, %d)\n",twin[n],twin[n]+2);
    }
    return 0;
}
