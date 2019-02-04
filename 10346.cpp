    #include<stdio.h>
    int main(void)
    {
       long long a,b;
       while(scanf("%lld %lld",&a,&b)!=EOF)
          if(b>1)
             printf("%lld\n",(a + ((a-1) / (b-1))));
    }
