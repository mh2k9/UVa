#include<stdio.h>
#include<math.h>
int main()
{
int h,m; double x;
while(1)
{
scanf("%d:%d",&h,&m);
if(h==0 && m==0) break;
x=fabs(5.5*m-30*h); if(x-180>1e-9)
x=360-x; printf("%.3lf\n",x);
}
return 0;
}
