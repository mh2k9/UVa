#include<stdio.h>
#include<iostream>
using namespace std;
#define N 100
int arr[N];
int base(long long str)
{
    int r;
    int i=0;
    while(str!=0)
    {
        r=str%3;
        arr[i++]=r;
        str=str/3;
    }
    return --i;
}
int main()
{
    long long n=1;
    int i;
    while(1)
    {
       cin>>n;if(n<0) break;
       if(n==0) cout<<"0";
       else {
       int lim=base(n);
       for(i=lim;i>=0;i--)
       cout<<arr[i];}
       cout<<endl;
    }
    return 0;
}
