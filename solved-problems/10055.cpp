#include <iostream>
#include<stdio.h>
int main()
{
double p,q,r;
while(scanf("%lf %lf",&p,&q)!=EOF){
if(p>q) {r=p-q;printf("%.0lf\n",r);}
else {r=q-p;printf("%.0lf\n",r);}
}
return 0;
}
