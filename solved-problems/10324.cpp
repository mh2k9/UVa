#include<stdio.h>
#include<iostream>
using namespace std;

char str[1000001];

int zamela(long i , long j)
{
    long k;
    for(k=i+1;k<=j;k++)
    {
        if(str[k]!=str[i])
        return 0;
    }
    return 1;
}

int main()
{
    freopen("mat.in","r",stdin);
    long i,j,k,n,max,min,c=1,p;

    while(cin>>str)
    {
        cin>>n;
        cout<<"Case "<<c++<<":"<<endl;
        while(n--)
        {
            cin>>i>>j;
            if(i>j) {max=i;min=j;}
            else {max=j;min=i;}
            p=zamela(min,max);
            if(p==1)
            cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}
