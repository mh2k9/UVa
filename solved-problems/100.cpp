#include<stdio.h>
int cycle(int a)
{
    int l=1;
    while(a!=1)
    {
        if(a%2==0) a=a/2;
        else a=a*3+1;
        l++;
    }
    return l;
}
int main(void)
{
    long int a,b,t,max,min,p,q;
    int i;
    while(scanf("%ld %ld",&a,&b)!=EOF)
    {
        p=a;q=b;
        if(a>b){
        t=a;a=b;b=t;}
        max=cycle(a);
        for(i=a+1;i<=b;i++)
        {
           min=cycle(i);
           if(max<min)
           max=min;
        }
        printf("%ld %ld %ld\n",p,q,max);
    }
}
