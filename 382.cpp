#include<stdio.h>
#include<iostream>
using namespace std;

int div(long long n)
{
    long long s=0,i;
    for( i=2;i<=n/2;i++)
    {
        if(n%i==0)
        s+=i;
    }
    s=s+1;
    return s;
}
int main()
{
    long long n;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(1)
    {
        cin>>n;
        if(n==0) {cout<<"END OF OUTPUT"<<endl; break;}
        div(n);
        if(n==1) printf("%5lld  DEFICIENT\n",n);
        else if(div(n)==n) printf("%5lld  PERFECT\n",n);
        else if(div(n)>n) printf("%5lld  ABUNDANT\n",n);
        else printf("%5lld  DEFICIENT\n",n);
    }
    return 0;
}
