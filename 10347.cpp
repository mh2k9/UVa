#include<iostream>
#include<stdio.h>
#include<math.h>
#include<iomanip>
int main(void)
{
    using namespace std;
    double a,b,c,in,s;
    double ar;
    while(cin>>a>>b>>c)
    {
       s=(a+b+c)/2;
       in=(s-a)*(s-b)*(s-c)*s;
       if(in<0) ar=-1;
       else ar=(4*sqrt(in))/3;
       if(ar==0) ar=-1;
       printf("%.3lf\n",ar);
    }
}
