#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    int n,i,k,j,cs=1,d;char str[300];char c;
    scanf("%d",&n);
    while(n--)
    {
       cin>>str;
       int len=strlen(str);
       printf("Case %d: ",cs++);
       for(i=0;i<len;i+=2)
       {
           c=str[i];
           k=(int)str[i+1]-48;
           d=(int)str[i+2]-48;
           if(d<=9 && d>=0){ k=d+(k*10);i++;}
           for(j=0;j<k;j++)
           printf("%c",c);
       }
       printf("\n");
    }
    return 0;
}
