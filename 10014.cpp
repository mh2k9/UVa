#include<iostream>
#include<stdio.h>
double a0,an1,c[4000];
int n;
int  main(void)
{
    using namespace std;
    int cases,i;
    cin>>cases;
    while(cases--)
    {
        cin>>n;
        cin>>a0>>an1;
        for(int i=1;i<=n;i++)
        cin>>c[i];
        double a1=n*a0+an1;
        double sum=0;
        for(i=1;i<=n;i++)
        sum+=(n-i+1)*c[i];
        a1-=2*sum;
        a1/=(n+1);
        printf("%.2lf\n",a1);
        if(cases) printf("\n");
    }
}
