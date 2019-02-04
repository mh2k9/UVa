#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[10000],pal[10000],x;
    int i,j,k;
    while(gets(str))
    {
        if(str[0]=='D' && str[1]=='O' && str[2]=='N' && str[3]=='E') break;
        int len=strlen(str),flag=0;k=0;
        for(i=0;i<len;i++)
        {
            x=tolower(str[i]);
            if(x>='a' && x<='z')
            pal[k++]=x;
        }k--;
        for(i=0,j=k;i<k/2,j>=k/2;i++,j--)
        {
            if(pal[i]!=pal[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0) printf("You won't be eaten!\n");
        else printf("Uh oh..\n");
    }
    return 0;
}
