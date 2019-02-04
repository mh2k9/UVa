#include<stdio.h>
#include<string.h>
#include<math.h>
#include<iostream>
long int decimal(char s[10])
{
    int l=strlen(s);
    long int dec=0;
    int n=1;
    for(int i=l-1;i>=0;i--)
    {
        dec+=(((int)s[i])-48)*n;
        n*=10;
    }
    return dec;
}
long int prime(long int p)
{
    int m=0,n=0;

    for(int i=2;i<=sqrt(p);i++)
        {if(p%i==0) m++;}
    if(m>0) return m;
    else return n;
    }
long int rev(char s[10])
{
    int l=strlen(s),n=1;
    long int re=0;
    for(int i=0;i<l;i++)
    {
        re+=(((int)s[i])-48)*n;
        n*=10;
    }
    return re;
}
int main(void)
{
    using namespace std;
    //freopen("mat.in","rb",stdin);
    char str[10];
    while(cin>>str)
    {
        long int val=decimal(str),val1;
        long int r=val;
        if(r==1) cout<<r<<" "<<"is not prime."<<endl;
        else if(r==2 || r==3 || r==5 || r==7 || r==11)
        cout<<r<<" "<<"is prime."<<endl;
        else if(prime(val)==0)
        {
            val1=rev(str);
            if(val==val1) cout<<r<<" "<<"is prime."<<endl;
            else if(prime(val1)==0) cout<<r<<" "<<"is emirp."<<endl;
            else if(prime(val1)!=0)cout<<r<<" "<<"is prime."<<endl;
        }
        else cout<<r<<" "<<"is not prime."<<endl;
    }
}
