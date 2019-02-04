#include<stdio.h>
long max;
int x[101][101];
int n;
void main()
{
    int i,j,p,q,count,a;
    while (scanf("%d",&n)==1)
    {
        max=-13000;
        for (i=0;i<n;i++)
        for (j=0;j<n;j++)
        scanf("%d",&x[i][j]);
        for (i=0;i<n;i++)
        {
            for (j=0;j<n;j++)
            {
                for (p=i;p<n;p++)
                {
                    count=0;
                    for (q=j;q<n;q++)
                    {
                        for (a=i;a<=p;a++)
                        {count+=x[a][q];

                        }

                        if(count>max)
                        {
                           max=count;
                        }

                    }
                }
            }
        }
        printf("%ld\n",max);
    }
}
