#include<iostream>
#include<stdio.h>
using namespace std;

int rel(int i,int j)
{
    int t;
    while(i>0)
    {
        t=j%i;
        j=i;
        i=t;
    }
    return j;
}
void out(int step ,int mod)
{
    printf("%10ld",step);
    printf("%10ld",mod);
    cout<<"    ";
    if(rel(step,mod)!=1)
    {
        cout<<"Bad Choice"<<endl;
        return;
    }
   cout<<"Good Choice"<<endl;
}
int main()
{
    int step,mod;
    while(scanf("%d %d",&step,&mod)==2)
    {
        out(step,mod);
        cout<<endl;
    }
    return 0;
}
