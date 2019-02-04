#include<stdio.h>
#include<math.h>

double count(long a)
{
    double sum;
    long i;
    if(a==0) return 1;
    else
    {
        sum=0;
        for(i=1;i<=a;i++)
        {
            sum+=log10(i);
        }
        return floor(sum)+1;
    }
}
int main()
{
    double sum;
    long n,m;
    scanf("%ld",&n);
    while(n--)
    {
        scanf("%ld",&m);
        sum=count(m);
        printf("%.0lf\n",sum);
    }
    return 0 ;
}
