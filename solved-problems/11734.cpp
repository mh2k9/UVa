#include<stdio.h>
#include<iostream>
#include<string.h>
int num(char s[100])
{
    int num=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
        num++;
    }
    return num;
}
int form(char s[10])
{
    int formt=0,n=1;
    for(int i=strlen(s)-1;i>=0;i--)
    {
        formt=formt+(s[i]-48)*n;
        n*=10;
    }
    return formt;
}
int main(void)
{
    using namespace std;
    char str[100],str1[100],n[10],st[10];
    int j=1,m;
    gets(n);
    m=form(n);
    while(m--)
    {
        gets(str);
        gets(str1);
        int a=num(str);
        int b=num(str1);
        int p=strlen(str)-a;
        int q=strlen(str1)-b;
        //printf("%d %d",a,b);
        if(a!=b && p==q)
        printf("Case %d: Output Format Error\n",j);
        else if(strcmp(str,str1)==0)
        printf("Case %d: Yes\n",j);
        else printf("Case %d: Wrong Answer\n",j);

        j++;
    }
}
