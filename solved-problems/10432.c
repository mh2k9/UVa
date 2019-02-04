#include<stdio.h>
#include<math.h>
int main()
{
double n,r,s;
while(scanf("%lf%lf",&r,&n)==2)
{
printf("%.3lf\n",(r*r*n*sin(2*acos(-1)/n))/2);
}
return 0;
}
