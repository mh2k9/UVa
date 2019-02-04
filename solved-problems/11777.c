#include<stdio.h>
void main()
{
    int n,a,b,c,d,t1,t2,t,val,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=0,t2=200;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        for(j=0;j<3;j++)
         {
             scanf("%d",&t1);
             t+=t1;
             if(t2>t1) t2=t1;
         }
        t=(t-t2)/2;
        val=a+b+c+d+t;
        if(val>=90) printf("Case %d: A\n",i);
            else if(val>=80) printf("Case %d: B\n",i);
                else if(val>=70) printf("Case %d: C\n",i);
                    else if(val>=60) printf("Case %d: D\n",i);
                        else printf("Case %d: F\n",i);
    }
}
