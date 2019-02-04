#include<iostream>
#include<stdio.h>
#include<math.h>
int main(void)
{
    using namespace std;
    double a,s,r,A,B,C,p;
    while(cin>>A>>B>>C)
    {
        if(A==0.0||B==0.0||C==0.0)
        printf("The radius of the round table is: 0.000\n");
        else
        {
            s=(A+B+C)/2;
            if(s<0)
            s=s*-1;
            p=s*(s-A)*(s-B)*(s-C);
            a=sqrt(p);
            r=a/s;
            printf("The radius of the round table is: %.3lf\n",r);
        }
    }
}
