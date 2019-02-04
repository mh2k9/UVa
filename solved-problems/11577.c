#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int n,len,x,i,k,m;
    char str[201];
    while(scanf("%d\n",&n)==1)
    {
        for(k=0;k<n;k++)
        {
        gets(str);
        int c[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            if(tolower(str[i])>='a' && tolower(str[i])<='z')

            {
                x=tolower(str[i]);
                c[x-97]++;
            }
        }
        m=0;
        for(i=0;i<26;i++)
        {
            if(c[i]>m)
            m=c[i];
        }
        for(i=0;i<26;i++)
        {
            if(c[i]==m)
            printf("%c",i+97);
        }
        printf("\n");
        }
    }
    return 0;
}
