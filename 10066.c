#include<stdio.h>
#include<string.h>
#define MAX 200

char x[MAX],y[MAX];
int c[MAX][MAX],b[MAX][MAX],k;

int LCSlength(int m, int n)
{
    int i,j;
    for(i=1;i<=m;i++) c[i][0]=0;
    for(i=0;i<=n;i++) c[0][i]=0;

    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(x[i-1]==y[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]=1;
            }
            else if(c[i-1][j]>=c[i][j-1])
            {
            c[i][j]=c[i-1][j];
            b[i][j]=2;
            }
            else
            {
            c[i][j]=c[i][j-1];
            b[i][j]=3;
            }
        }
    }
    return c[m][n];
}

int printLCS(int i , int j)
{
    if(i==0 || j==0) return 0;
    if(b[i][j]==1)
    {
        printLCS(i-1,j-1);
        k++;
    }
    else if(b[i][j]==2) printLCS(i-1,j);
    else printLCS(i,j-1);
    return k;
}
void main()
{
    int m,n,i,p,z=1;
    while(1)
    {
        scanf("%d %d",&m,&n);
        if(m==0 && n==0) break;
        k=0;
        for(i=0;i<m;i++) scanf("%d",&x[i]);
        for(i=0;i<n;i++) scanf("%d",&y[i]);
            LCSlength(m,n);
            p=printLCS(m,n);
            printf("Twin Towers #%d\nNumber of Tiles : %d\n\n",z++,p);
    }
}
