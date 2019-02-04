#include<stdio.h>
double nCr(double low, double high, double fac)
{
    double r=1,s;
    int i;
    for(i=high;i>low;i--)
    {
        r*=i;
        s=r/fac;
        fac--;
        if(fac<1) fac=1;
        r=s;
    }

    return r;
}

void main()
{
    double p,q,max,min,pq;
    while(1)
    {
        scanf("%lf %lf",&p,&q);
        if(p==0 && q==0) break;
        if(p-q>=q)
        {
            max=p-q;
            min=q;
        }
        else
        {
            max=q;
            min=p-q;
        }
        pq=nCr(max,p,min);
        printf("%.0lf\n",pq);
    }
    return 0;
}
