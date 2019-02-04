#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    if(n>100) n=100;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a<1) a=1; if(a>50) a=50;
        if(b<1) a=1; if(b>50) b=50;
        if(c<1) a=1; if(c>50) c=50;
        if(a<=20 &&b<=20 && c<=20) printf("Case %d: good\n",i+1);
        else printf("Case %d: bad\n",i+1);
    }

    return 0;
}
