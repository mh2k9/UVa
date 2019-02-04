    #include<stdio.h>
    #include<string.h>
    #include<math.h>

    int num(char ch[8])
    {
        int s=0,n=1,i;
        for(i=strlen(ch)-1;i>=0;i--)
        {
            s+=((int)ch[i]-48)*n;
            n*=10;
        }
        return s;
    }
    void main()
    {
        char ch[8],str[10001];
        int lm,l,j,i,s;
        gets(ch);
        s=num(ch);
        while(s--)
        {
            gets(str);
            l=strlen(str);
            lm=sqrt(l);
            if(l!=lm*lm)
            printf("INVALID\n");
            else{
            for(i=0;i<lm;i++)
            {
                for(j=i;j<l;j=j+lm)
                {
                    printf("%c",str[j]);
                }
            }printf("\n");
            }
        }

        return 0;
    }

