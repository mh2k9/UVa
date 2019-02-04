#include<stdio.h>
int main()
{
int a,b,count,carry,sum;
while(scanf("%d %d",&a,&b)==2&&(a||b!=0))
{
    count=0;carry=0;sum=0; while(a>0||b>0)
{
    sum=(a%10)+(b%10)+carry; if(sum>=10) count+=1;
    carry=((a%10)+(b%10)+carry)/10; a=a/10;b=b/10;
}
if(count==0) printf("No carry operation.\n");
else if(count==1) printf("1 carry operation.\n");
else printf("%d carry operations.\n",count);
}
return 0;
}
