#include<stdio.h>
int main()
{
    int n,x=0,y=0;
    scanf("%d",&n);
    if(n>20) n=20;
    int v2[10],v1[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<10;j++)
        {
        scanf("%d",&v2[j]);
        if(v2[j]>100) v2[j]=100;
        }
        for(int k=0;k<9;k++)
        {
            if(v2[k]<v2[k+1])x++;
            else if(v2[k]>v2[k+1])y++;
        }
        if (x==9||y==9) v1[i]=1;
            else v1[i]=2;
        x=y=0;
    }
    printf("Lumberjacks:\n");
    for(int i=0;i<n;i++)
    {
        if(v1[i]==1) printf("Ordered\n");
        else printf("Unordered\n");
    }


    return 0;
}
