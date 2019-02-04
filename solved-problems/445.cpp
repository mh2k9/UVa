#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    char str;
    int n=0;
    while(scanf("%c",&str)!=EOF)
    {
        if((int)str>=48 && (int)str<=57)

        {
            n+=((int)str-48);
        }
        else if(str==' ')
        printf(" ");
        else if(str=='!')
        {
            if(n==0) n=1;
            for(int i=0;i<n;i++)
            {
                printf("\n");
            }
            n=0;
        }
        else if(str=='b')
        {
            for(int i=0;i<n;i++)
            {
                printf(" ");

            }
            n=0;
        }
        else if(str=='\n')
        {
            printf("\n");
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                printf("%c",str);

            }
            n=0;
        }
    }
    return 0;
}
