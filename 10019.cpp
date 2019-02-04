#include<iostream>
#include<stdio.h>
using namespace std;
int COD(int num)
{
    int c=0;
    while(num!=0)
    {
        if(num%2==1)
            c++;
            num/=2;
    }return c;
}
int COH(int num)
{
    int c=0,n;
    while(num!=0)
    {
        n=num%10;
        while(n!=0){
            if(n%2==1)
            c++;
            n/=2;
        }num/=10;

    }return c;
}
int main()
{
    int num,n;
    cin>>n;
    while(n!=0)
    {
        cin>>num;
        cout<<COD(num)<<" ";
        cout<<COH(num)<<endl;
        n--;
    }
    return 0;
}
