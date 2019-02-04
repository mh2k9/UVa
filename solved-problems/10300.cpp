#include<stdio.h>
int main()
{
unsigned long int size,animal,env,total,n,f;
scanf("%li",&n);
for(int i=1;i<=n;i++)
{
scanf("%li",&f);
{total=0;
for(int j=1;j<=f;j++)
{
scanf("%li%li%li",&size,&animal,&env);
total=size*env+total;
}
printf("%li\n",total);
}
}
return 0;
}
