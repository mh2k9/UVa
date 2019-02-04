#include<stdio.h>
#include<math.h>
int main()
{
double m,n;
while(scanf("%lf %lf",&m,&n)==2)
printf("%.0lf\n",pow(n,1/m));
return 0;
}
