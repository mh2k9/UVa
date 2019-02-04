#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int mirror(char str[1000])
{
    int p=strlen(str);
    int q=p/2,j=0;
    for(int i=0;i<(strlen(str))/2;i++)
    {
         if(str[i]=='A' && str[--p]=='A') j++;
    else if(str[i]=='E' && str[--p]=='3') j++;
    else if(str[i]=='3' && str[--p]=='E') j++;
    else if(str[i]=='H' && str[--p]=='H') j++;
    else if(str[i]=='I' && str[--p]=='I') j++;
    else if(str[i]=='J' && str[--p]=='L') j++;
    else if(str[i]=='L' && str[--p]=='J') j++;
    else if(str[i]=='M' && str[--p]=='M') j++;
    else if(str[i]=='O' && str[--p]=='O') j++;
    else if(str[i]=='S' && str[--p]=='2') j++;
    else if(str[i]=='T' && str[--p]=='T') j++;
    else if(str[i]=='U' && str[--p]=='U') j++;
    else if(str[i]=='V' && str[--p]=='V') j++;
    else if(str[i]=='W' && str[--p]=='W') j++;
    else if(str[i]=='X' && str[--p]=='X') j++;
    else if(str[i]=='Y' && str[--p]=='Y') j++;
    else if(str[i]=='Z' && str[--p]=='5') j++;
    else if(str[i]=='1' && str[--p]=='1') j++;
    else if(str[i]=='2' && str[--p]=='S') j++;
    else if(str[i]=='5' && str[--p]=='Z') j++;
    else if(str[i]=='8' && str[--p]=='8') j++;
    else break;
    }
    if(str[q]=='A'||str[q]=='E'||str[q]=='H'||str[q]=='I'||str[q]=='J'||str[q]=='L'||str[q]=='M'||str[q]=='O'||str[q]=='S'||str[q]=='T'||str[q]=='U'||str[q]=='V'||str[q]=='W'||str[q]=='X'||str[q]=='Y'||str[q]=='Z'||str[q]=='5'||str[q]=='1'||str[q]=='2'||str[q]=='3'||str[q]=='8')
    j++;
    if(j==q+1) return 1;
    else return 0;

}
int pal(char str[1000])
{
    int p=strlen(str);
    int q=p/2,j=0;
    for(int i=0;i<(strlen(str))/2;i++)
    {
        if(str[i]==str[--p])j++;
        else break;
    }
    if(j==q) return 1;
    else return 0;
}
int main()
{
    char str[1000];
    while(gets(str))
    {
        if(pal(str)==1)
        {
            if(mirror(str)==1) cout<<str<<" -- is a mirrored palindrome."<<endl;
            else cout<<str<<" -- is a regular palindrome."<<endl;
        }
        else if(mirror(str)==1) cout<<str<<" -- is a mirrored string."<<endl;
        else cout<<str<<" -- is not a palindrome."<<endl;
        cout<<endl;
    }
    return 0;
}
