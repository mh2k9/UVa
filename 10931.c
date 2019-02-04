#include<stdio.h>

long con(long n)
{
    long p=0,count=0,r=1,i;
    char str[100];
    while(r>0)
    {
        if(n%2==1)
        {
            count++;
            str[p++]='1';
        }
        else
        str[p++]='0';
        r=n/2;n=r;
    }
        printf("The parity of ");
        for(i=p-1;i>=0;i--)
        printf("%c",str[i]);
        printf(" is %ld (mod 2).\n",count);
    return 0;
}
void main()
{
    long i;
    while(1)
    {
        scanf("%ld",&i);
        if(i==0) break;
        con(i);

    }
    return 0;
}
