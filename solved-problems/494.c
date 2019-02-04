#include<stdio.h>
#include<ctype.h>
void main()
{
    int count=0,flag=0;
    char c;
    while(scanf("%c",&c)==1)
    {
        if(isalpha(c)) flag=1;
        if(!isalpha(c) && c!='\n' && flag==1)
        {
            count++;
            flag=0;
        }
        if(c=='\n')
        {
            printf("%d\n",count);
            count=0;
        }
    }
}
