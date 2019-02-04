#include<stdio.h>

void main()
{

    int i,n,m,p=0;
    float sum=0;
    float av;
    char c='%';
    scanf("%d",&n);
    while(n--)
    {
       scanf("%d",&m);
       float arr[m];
       for(i=0;i<m;i++)
       {
           scanf("%f",&arr[i]);
           sum+=arr[i];
       }
       sum/=(float)m;
       for(i=0;i<m;i++)
       {
           if(arr[i]>sum) p++;
       }
       av=((float)p*100.0)/(float)m;
       printf("%.3f%c\n",av,c);
       sum=0;p=0;
    }

}
