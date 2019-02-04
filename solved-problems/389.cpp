#include<stdio.h>
#include<string.h>
#include<iostream>
#include<math.h>
using namespace std;
int arr[100],tp;

int decimal(char str[100],int b)
{
    int sum=0,len=strlen(str),k=0,num;

    for(int i=len-1;i>=0;i--)
    {
        if(str[i]=='A') num=10;
        else if(str[i]=='B') num=11;
        else if(str[i]=='C') num=12;
        else if(str[i]=='D') num=13;
        else if(str[i]=='E') num=14;
        else if(str[i]=='F') num=15;
        else num=(int)str[i]-48;
        sum+=num*pow(b,k++);
    }
    return sum;
}
void binary(int con,int b)
{
    if(con==0)
    {
        int p=0;
        printf("%7d",p);
    }else
    {
    tp=0;
    while(con>0)
    {
        arr[tp++]=con%b;
        con/=b;
    }

    if(tp>7)
    {
        printf("  ERROR\n");
        return;
    }else{tp--;
    int x=6-tp;
    for(int i=x;i>0;i--)
    printf(" ");
    for(int i=tp;i>=0;i--)
    {
        if(arr[i]==10) cout<<'A';
        else if(arr[i]==11) cout<<'B';
        else if(arr[i]==12) cout<<'C';
        else if(arr[i]==13) cout<<'D';
        else if(arr[i]==14) cout<<'E';
        else if(arr[i]==15) cout<<'F';
        else printf("%d",arr[i]);
    }}
    }
    printf("\n");
}

int main()
{
    char str[100];
    int b,d;long x;
    while(cin>>str>>b>>d)
    {
        if(d==10)
        {
            x=decimal(str,b);
            if(x>9999999) printf("  ERROR\n");
            else printf("%7d\n",x);
        }
        else binary(decimal(str,b),d);
    }
    return 0;
}
