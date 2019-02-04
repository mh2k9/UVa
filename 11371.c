#include<stdio.h>
#include<string.h>

char a[100];

long double number(char str[100])
{
    long double x=1,rev=0;
    int len=strlen(str),i;
    for(i=len-1;i>=0;i--)
    {
        rev+=(((int)str[i]-48)*x);
        x*=10;
    }
    return rev;
}
long double assending(char str[100])
{
    int len=strlen(str),i,k=0,j;
    char temp[3];
    for(i=0;i<len-1;i++)
    for(j=i+1;j<len;j++)
    {
        if(str[i]>str[j])
        {
            temp[0]=str[i];
            str[i]=str[j];
            str[j]=temp[0];
        }
    }
    if(str[0]=='0')
    {
        for(i=1;i<len;i++)
        {
            if(str[i]!='0')
            {
                temp[0]=str[i];
                str[i]=str[0];
                str[0]=temp[0];
                break;
            }
        }
    }
    return number(str);
}
long double desending(char str[100])
{
    int len=strlen(str),i,k=0,j;
    char temp[3];
    for(i=0;i<len-1;i++)
    for(j=i+1;j<len;j++)
    {
        if(str[i]>str[j])
        {
            temp[0]=str[i];
            str[i]=str[j];
            str[j]=temp[0];
        }
    }
    for(i=len-1;i>=0;i--)
    {
        a[k]=str[i];
        k++;
    }
    return number(a);
}
int main()
{
    char str[100];
    int i;
    while(gets(str))
    {
        long double m,n;
        n=assending(str);
        m=desending(str);
        if(n<12 || m==n) printf("%.0Lf - %.0Lf = 0 = 9 * 0\n",n,n);else
        printf("%.0Lf - %.0Lf = %.0Lf = 9 * %.0Lf\n",m,n,(m-n),(m-n)/9);
        int len=strlen(str);
        for(i=0;i<len;i++) a[i]='\0';
    }
    return 0;
}
