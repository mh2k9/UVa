#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    if(n>20)n=19;
    int v[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>10000) a=10000; if(a<1000) a=1000;
        if(b>10000) b=10000; if(b<1000) b=1000;
        if(c>10000) c=10000; if(c<1000) c=1000;
        if(a>b&&a<c || a<b&&a>c) v[i]=a;
        else if(b>a&&b<c || b<a&&b>c) v[i]=b;
        else v[i]=c;
    }
    for(int k=0;k<n;k++)
    printf("Case %d: %d\n",k+1,v[k]);

    return 0;
}
