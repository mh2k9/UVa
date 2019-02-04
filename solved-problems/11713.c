#include<stdio.h>
#include<string.h>

int main()
{
    char n1[1000],n2[1000];
    int i,j,k,len1,len2,l;
    while(scanf("%d\n",&k)==1)
    {
        for(j=0;j<k;j++)
        {
            gets(n1);
            gets(n2);
            len1=strlen(n1);
            len2=strlen(n2);
            if(len1!=len2) printf("No\n");
            else
            {
                for(i=0,l=0;i<len1;i++)
                {
                    if((n1[i]=='a'||n1[i]=='e'||n1[i]=='i'||n1[i]=='o'||n1[i]=='u')&&(n2[i]=='a'||n2[i]=='e'||
                    n2[i]=='i'||n2[i]=='o'||n2[i]=='u'))continue;
                    else if(n1[i]!=n2[i])
                    {
                        l=1;
                        break;
                    }
                }
                if(l>0) printf("No\n");
                else printf("Yes\n");
            }
        }
    }
    return 0;
}
