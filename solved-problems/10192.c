    #include <stdio.h>
    #include <string.h>

    #define SIZE 1001

    char X[SIZE],Y[SIZE];
    int c[SIZE][SIZE];
    int i,j,m,n;

    int LCSlength()
    {
      m=strlen(X);
      n=strlen(Y);

      for (i=1;i<=m;i++)
         c[i][0]=0;

      for (j=0;j<=n;j++)
         c[0][j]=0;


      for (i=1;i<=m;i++)
       {
          for (j=1;j<=n;j++)
          {
             if (X[i-1]==Y[j-1])
                c[i][j]=c[i-1][j-1]+1;

             else if (c[i-1][j]>=c[i][j-1])
                c[i][j]=c[i-1][j];

             else
                c[i][j]=c[i][j-1];

          }
       }
      return c[m][n];
    }


    int main()
    {
       int t_case=0;
       while (gets(X)!=NULL)
       {
          t_case++;
          if(X[0]=='#')
             break;
          gets(Y);
          int len=LCSlength();
          printf("Case #%d: you can visit at most %d cities.",t_case,len);
          printf("\n");
       }
       return 0;
    }

