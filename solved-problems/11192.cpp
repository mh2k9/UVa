#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int groupReverse(int group , char str[1000])
{
    int len,i,low=0,tem;
    len=strlen(str);
    tem=len/group;
    group=tem;
    while(group<=len)
    {
        for(i=group-1;i>=low;i--)
        {
            cout<<str[i];
        }
        low=group;
        group+=tem;
    }
    cout<<endl;
    return 0;
}

int main()
{
    int lim;
    char str[1000];
    while(1)
    {
        cin>>lim;
        if(lim==0) break;
        cin>>str;
        groupReverse(lim,str);
    }
    return 0;
}
