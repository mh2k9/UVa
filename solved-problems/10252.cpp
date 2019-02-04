#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

char arr[1000000];
int tp;

void search(char str[10000],char str1[100000])
{
    int a=strlen(str),b=strlen(str1),flag=0;
    int i,k;tp=0;
    for(i=0;i<a;i++)
    {
        for(k=0;k<b;k++)
        {
            if(str[i]==str1[k])
            {
                arr[tp++]=str[i];
                str1[k]='0';
                break;
            }
        }
    }
    char temp;
    for(i=0;i<tp;i++)
    {
        for(k=i+1;k<tp;k++)
        {
            if(arr[i]>arr[k])
            {
                temp=arr[i];
                arr[i]=arr[k];
                arr[k]=temp;
            }
        }
    }
    for(i=0;i<tp;i++)
    {
        if(arr[i]!=' ')
        printf("%c",arr[i]);
    }

    printf("\n");
}

int main()
{
    char str[100000],str1[1000000];
    while(gets(str) && gets(str1))
    {
        search(str,str1);
    }
    return 0;
}
