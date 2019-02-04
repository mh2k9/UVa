    #include<stdio.h>
    #include<stdlib.h>

    int a[102][102];
    int main()
       {
          int i,n,j,col,row,s,r,p,q;

          while(scanf("%d",&n)==1 && n)
          {
             s=0;
             r=0;
             p=0;
             q=0;
             for(i=0;i<n;i++)
             {
                for(j=0;j<n;j++)
                {
                   scanf("%d",&a[i][j]);
                }
             }

             for(i=0;i<n;i++)
             {
                s=0;
                r=0;
                for(j=0;j<n;j++)
                {
                   s=s+a[i][j];
                   r=r+a[j][i];
                }
                if(s%2==1)
                {
                   p++;
                   row=i;
                }
                if(r%2==1)
                {
                   q++;
                   col=i;
                }
                if(p>=2 || q>=2)
                   break;
             }

             if(p==0 && q==0)
                printf("OK\n");

             else if(p==1 && q==1)
                printf("Change bit (%d,%d)\n",row+1,col+1);

             else
                printf("Corrupt\n");
          }
          return 0;
       }
