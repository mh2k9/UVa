#include<stdio.h>
#include<string.h>

long arr[200],tp,flag=0;

void numbers(char str[100000])
{
    long x=1,sum=0,i;tp=0;flag=0;
    long len=strlen(str);
    for(i=len-1;i>=0;i--)
    {
        if(str[i]==' ')
        {
            if(flag!=0)
            arr[tp++]=sum;
            sum=0;x=1;flag=0;
        }
        else if(i==0)
        {
            sum+=((int)str[i]-48)*x;
            arr[tp++]=sum;
        }
        else
        {
            sum+=((int)str[i]-48)*x;
            x*=10;flag=1;
        }
    }
}

long gcd(long a, long b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}

int main()
{
    long n,r,s,j;char str[100000],i;
    scanf("%ld\n",&n);
    while(n--)
    {
        gets(str);
        numbers(str);
        s=0;
        for(i=0;i<tp-1;i++)
        {
            for(j=i+1;j<tp;j++)
            {
                r=gcd(arr[i],arr[j]);
                if(r>s)
                s=r;
            }
        }
        printf("%ld\n",s);
    }
    return 0;
}
