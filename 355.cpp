#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
using namespace std;

int check(int n , char str[100])
{
   int len=strlen(str),num;
   for(int i=0;i<len;i++)
   {
       if(str[i]=='A') num=10;
       else if(str[i]=='B') num=11;
       else if(str[i]=='C') num=12;
       else if(str[i]=='D') num=13;
       else if(str[i]=='E') num=14;
       else if(str[i]=='F') num=15;
       else num=(int)str[i]-48;
       if(num>(n-1))
       return 0;
   }
   return 1;
}


long decimal(char str[100], int b)
{
    long sum=0;
    int x=1,len=strlen(str),num,k=0;
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

void otherFormate(long n , int b)
{
    int arr[100],tp=0;
    if(n==0) arr[tp++]=0;
    while(n>0)
    {
        arr[tp++]=n%b;
        n/=b;
    }
    tp--;

    for(int i=tp;i>=0;i--)
    {
        if(arr[i]==10) printf("A");
        else if(arr[i]==11) printf("B");
        else if(arr[i]==12) printf("C");
        else if(arr[i]==13) printf("D");
        else if(arr[i]==14) printf("E");
        else if(arr[i]==15) printf("F");
        else printf("%d",arr[i]);
    }
    printf(" base %d\n",b);
}

int main()
{
    int a,b;
    char str[100];
    while(cin>>a>>b>>str)
    {
        if(check(a,str)==1)
        {
            printf("%s base %d = ",str,a);
            otherFormate(decimal(str,a),b);
        }
        else printf("%s is an illegal base %d number\n",str,a);
    }
    return 0;
}
