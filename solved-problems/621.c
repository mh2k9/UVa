#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    char str[1000];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",str);
        int l=strlen(str);
        if(str[l-2]=='3' && str[l-1]=='5') printf("-\n");
        else if(str[0]=='9' && str[l-1]=='4') printf("*\n");
        else if(str[0]=='1' && str[1]=='9' && str[2]=='0') printf("?\n");
        else printf("+\n");
    }
    return 0;
}
