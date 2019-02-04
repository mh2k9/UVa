#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int num,x1,x2,x3,x4,x;
    while(cin>>num)
    {
        x1=num&0xFF000000;
        x2=num&0x00FF0000;
        x3=num&0x0000FF00;
        x4=num&0x000000FF;
        x1=x1>>24;
        x2=x2>>8;
        x3=x3<<8;
        x4=x4<<24;
        x4=x4&0xFF000000;
        x3=x3&0x00FF0000;
        x2=x2&0x0000FF00;
        x1=x1&0x000000FF;
        x=x1+x2+x3+x4;
        cout<<num<<" converts to "<<x<<endl;
    }
    return 0;
}

