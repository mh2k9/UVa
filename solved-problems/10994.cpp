#include<stdio.h>
#include<iostream>

double rec(int n)
{
double s1=0,s2=0,m;
while(n)
{
m = n%10;
n = n/10;
s1 += ( ( m * (m+1) ) / 2 );
s2 += (double)n * 45;
}
return (s1 + s2);
}

int main(void)
{
    int p,q;
    double sum=0;
    while(1)
    {
        scanf("%d %d",&p,&q);
        if(p<=-1 && q<=-1) break;
        if(p)
        sum = rec(q)-rec(p-1);
        else
        sum = rec(q);
        printf("%.0lf\n",sum);
        //sum=0;
    }
}
