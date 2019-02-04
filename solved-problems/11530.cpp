#include<stdio.h>
#include<iostream>
#include<string.h>
int num(char str[10])
{
    int n=1,val=0;
    for(int i=strlen(str)-1;i>=0;i--)
    {
        val+=((int)str[i]-48)*n;
        n*=10;
    }
    return val;
}
int count(char str[1000])
{
    int co=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='a'||str[i]=='d'||str[i]=='g'||str[i]=='j'||str[i]=='m'||str[i]=='p'||str[i]=='t'||str[i]=='w'||str[i]==' ')
        co++;
        else if(str[i]=='b'||str[i]=='e'||str[i]=='h'||str[i]=='k'||str[i]=='n'||str[i]=='q'||str[i]=='u'||str[i]=='x')
        co+=2;
        else if(str[i]=='c'||str[i]=='f'||str[i]=='l'||str[i]=='o'||str[i]=='r'||str[i]=='v'||str[i]=='y'||str[i]=='i')
        co+=3;
        else if(str[i]=='s'||str[i]=='z')
        co+=4;
    }
    return co;
}
int main(void)
{
    using namespace std;
    char n[10],str[1000];
    gets(n);
    int q=num(n);
    for(int i=1;i<=q;i++)
    {
        gets(str);
        printf("Case #%d: %d\n",i,count(str));
    }

}
