#include<stdio.h>
#include<string.h>

int main()
{
    int arr[101][101],k=0,high=0,j,i,l;
    char str[101];
    while(gets(str))
    {
        int len=strlen(str);
        if(len>high) high=len;
        for(i=0;i<101;i++)
        {
            if(i<len) l=(int)str[i];
            else l=(int)' ';
            arr[k][i]=l;
        }

        k++;
    }
    for(i=0;i<high;i++)
    {
        for(j=k-1;j>=0;j--)
        {
            printf("%c",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
