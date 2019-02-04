#include<stdio.h>
#include<ctype.h>

void main()
{
    char ch;
    char le[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char temp1,temp;
    int c[26],i,j;
    for(i=0;i<26;i++)
    c[i]=0;
    while(scanf("%c",&ch)!=EOF)
    {
        ch=toupper(ch);
        if(ch>64 && ch<91)
        c[ch-65]++;
    }
    for(i=0;i<25;i++)
    for(j=i+1;j<26;j++)
    {
        if(c[i]<c[j])
        {
            temp=c[j];
            c[j]=c[i];
            c[i]=temp;
            temp1=le[j];
            le[j]=le[i];
            le[i]=temp1;
        }
        else if(c[i]==c[j] && le[i]>le[j])
        {
            temp=c[j];
            c[j]=c[i];
            c[i]=temp;
            temp1=le[j];
            le[j]=le[i];
            le[i]=temp1;
        }
    }
    for( i=0;i<26;i++)
    if(c[i]>0)
    printf("%c %d\n",le[i],c[i]);
    return 0;
}
