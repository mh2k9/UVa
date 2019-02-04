#include<stdio.h>
#include<iostream>
using namespace std;

long long fact(long n)
{
    if(n==1) return 1;
    long long res=1;
    res=n*fact(n-1);
    return res;
}
int main()
{
    long n;
    while(cin>>n)
    {
        if(n>13 || n<0 && n%2!=0)   cout<<"Overflow!"<<endl;
        else if(n<0 && n%2==0 || n<8 && n>-1) cout<<"Underflow!"<<endl;
        else  cout<<fact(n)<<endl;
    }
    return 0;
}
