#include<stdio.h>

int main(void)
{
long x;

for(;scanf("%ld", &x) && x>=0; )
{
long i, a=0;


for(i=x;i>0;--i)
{
a= i + a;
}

printf("%ld\n",a+1);

}
}
