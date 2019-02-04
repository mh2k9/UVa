#include<stdio.h>
void main()
{
int a,count,b,p;
while(scanf("%d",&a)!=EOF)
{
    b=1,p=1,count=0;
    while(p!=0)
    {
        p=b%a;
        b=p*10+1;
        count++;
    }
    printf("%d\n",count);

}
return 0;
}
