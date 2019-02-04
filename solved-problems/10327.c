 #include<stdio.h>
    void main()
    {
       int ks,l,i,j,m,n,t;
       long count=0;
       int num[1005];
       while(scanf("%d",&l)==1){
              count=0;
          for(j=0;j<l;j++)
          {
             scanf("%d",&num[j]);
          }
          for(m=0;m<l;m++)
          {
             for(n=0;n<l-m-1;n++)
             {
                if(num[n]>num[n+1])
                {
                   t=num[n];
                   num[n]=num[n+1];
                   num[n+1]=t;
                   count++;
                }
             }
          }
          printf("Minimum exchange operations : %ld\n",count);
       }

       return 0;
    }
