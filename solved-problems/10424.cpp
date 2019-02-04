#include<stdio.h>
#include<iostream>
#include<string.h>
#include <ctype.h>
double dec(char str[26])
{
    double val=0,val1;
    for(int i=0;i<strlen(str);i++)
    {
             if(str[i]=='a'||str[i]=='A') val1=1;
        else if(str[i]=='b'||str[i]=='B') val1=2;
        else if(str[i]=='c'||str[i]=='C') val1=3;
        else if(str[i]=='d'||str[i]=='D') val1=4;
        else if(str[i]=='e'||str[i]=='E') val1=5;
        else if(str[i]=='f'||str[i]=='F') val1=6;
        else if(str[i]=='g'||str[i]=='G') val1=7;
        else if(str[i]=='h'||str[i]=='H') val1=8;
        else if(str[i]=='i'||str[i]=='I') val1=9;
        else if(str[i]=='j'||str[i]=='J') val1=10;
        else if(str[i]=='k'||str[i]=='K') val1=11;
        else if(str[i]=='l'||str[i]=='L') val1=12;
        else if(str[i]=='m'||str[i]=='M') val1=13;
        else if(str[i]=='n'||str[i]=='N') val1=14;
        else if(str[i]=='o'||str[i]=='O') val1=15;
        else if(str[i]=='p'||str[i]=='P') val1=16;
        else if(str[i]=='q'||str[i]=='Q') val1=17;
        else if(str[i]=='r'||str[i]=='R') val1=18;
        else if(str[i]=='s'||str[i]=='S') val1=19;
        else if(str[i]=='t'||str[i]=='T') val1=20;
        else if(str[i]=='u'||str[i]=='U') val1=21;
        else if(str[i]=='v'||str[i]=='V') val1=22;
        else if(str[i]=='w'||str[i]=='W') val1=23;
        else if(str[i]=='x'||str[i]=='X') val1=24;
        else if(str[i]=='y'||str[i]=='Y') val1=25;
        else if(str[i]=='z'||str[i]=='Z') val1=26;
        else val1=0;
        val+=val1;
    }
    return val;
}

double single(double n)
{
    double m,p,s=0;
    while(n!=0)
    {
        m=(int)n%10;
        s+=m;
        p=n/10;
        n=p;
    }
    if(s>9) s=single(s);
    return s;
}

int main(void)
{
    using namespace std;
    char str[26],str1[26];
    double a,b,p,q;
    double val;
    while(gets(str))
    {
        gets(str1);
        a=dec(str),b=dec(str1);
        if(a>9) p=single(a);
        else p=a;
        if(b>9) q=single(b);
        else q=b;
        if(p>q) val=q/p;
        else
        val=p/q;
        val=val*100;
        if(val>100) val=100.00;
        char x='%';
        printf("%.2lf %c\n",val,x);//break;
    }
}
