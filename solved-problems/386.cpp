#include<stdio.h>
int main(void)
{
        int aC,bC,cC,dC;
        int i,j,k,l;
        for(i=1;i<201;i++)
        {
            aC=i*i*i;
            for(j=2;j<201;j++)
            {
                bC=j*j*j;
                if(bC>=aC) break;
                for(k=j;k<201;k++)
                {
                    cC=k*k*k;
                    if(bC+cC>=aC) break;
                    for(l=k;l<201;l++)
                    {
                        dC=l*l*l;
                        if(bC+cC+dC>aC) break;
                        else if(bC+cC+dC==aC)
                        {
                            printf("Cube = %d, Triple = (%d,%d,%d)\n",i,j,k,l);
                            break;
                        }
                    }
                }
            }
        }
}
