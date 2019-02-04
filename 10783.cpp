#include<stdio.h>
int main(){
    //freopen("mat.in","rb",stdin);
int n,a,b,sum=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d %d",&a,&b);
    for(int j=a;j<=b;j++)
    {
        if(j%2==1)
        sum=sum+j;
    }
    printf("Case %d: %d\n",i+1,sum);
    sum=0;

}
return 0;
}
