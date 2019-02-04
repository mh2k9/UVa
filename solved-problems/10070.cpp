#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
long long a,s,d,f,g,h,j,k,l,e,E,q,c3,c11,Q,kk,w,ww,qq,ee,rr,tt,yy,iii,iiii,iiiii,uu,u;
string aa;int x1=0;
while(cin>>aa)
{
int leap=0,bulu=0,hulu=0;
a=aa.size();
if(a<5)
{
qq=5-a;
for(ww=0;ww<=qq;ww++)
{
aa="0"+aa;
}
}
a=aa.size();
ee=0;rr=0;
int oo=1;
for(tt=a-1;;tt--)
{
yy=(int)(aa[tt]-'0');
ee=ee+yy*oo;
rr++;
oo=oo*10;
if(rr==4) break;
}
e=0;E=0;
for(q=a-1;q>=0;q=q-2)
{
char l=aa[q];
e=e+(int)(l-'0');
}
for(Q=a-2;Q>=0;Q=Q-2)
{
char L=aa[Q];
E=E+(int)(L-'0');
}
k=ee;
if((k%4==0 && k%100!=0) || (k%400==0))
{
leap=1;
}

c3=e+E;
c11=e-E;
s=(int)(aa[a-1]-'0');
if((s==5 || s==0) && (c3%3==0))
{
hulu=1;
}
if(leap==1)
{
if((s==5 || s==0) && ((c11%11)==0))
{
bulu=1;
}
}if(x1>0)printf("\n");
x1++;
if(leap==1) printf("This is leap year.\n");
if(hulu==1) printf("This is huluculu festival year.\n");
if(bulu==1) printf("This is bulukulu festival year.\n");
if(leap==0 && hulu==0 && bulu==0) printf("This is an ordinary year.\n");

}
return 0;
}
