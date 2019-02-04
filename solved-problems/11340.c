#include<stdio.h>
#include<string.h>

int main()
{
    long int n,i,j,k,test,v[200],line,len,l;
    char ch[200],str[10000];
    double p;
    while(scanf("%ld\n",&n)==1)
    {
        for(k=0;k<n;k++)
        {
           p=0;
           scanf("%ld\n",&test);
           for(i=0;i<test;i++)
           scanf("%c %ld\n",&ch[i],&v[i]);
           scanf("%ld\n",&line);
           for(i=0;i<line;i++)
           {
               gets(str);
               len=strlen(str);
               for(j=0;j<test;j++)
               {
                   for(l=0;l<len;l++)
                   {
                       if(ch[j]==str[l])
                       p+=v[j];
                   }
               }
           }
           printf("%.2lf$\n",p/100);
        }
    }
    return 0;
}
