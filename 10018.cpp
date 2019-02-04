    #include<stdio.h>
    #include<stdlib.h>

    int main()
    {
       long long int a,rs=0,r,i,fs,b,n,count;

        scanf("%lld",&n);

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&a);

            rs=0;
            count=0;

            while(a!=0)
            {
                b=a;
                rs=0;

                while(a!=0)
                    {
                        r=a%10;
                        rs=rs*10+r;
                        a=a/10;
                    }

                fs=b+rs;
                a=fs;

                if( b == rs )
                break;
                count++;

            }
        printf("%lld %lld\n",count,rs);

        }
        return 0;
    }
