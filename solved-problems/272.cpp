#include<stdio.h>

int main()
{
    char ch;
    int flag=0;
    while(scanf("%c",&ch)==1)
    {
        if(ch=='"' && flag==0)
        {
            printf("``");
            flag=1;
        }

        else if(ch=='"' && flag==1)
        {
            flag=0;
            printf("''");
        }
        else
        printf("%c",ch);
    }
    return 0;
}
