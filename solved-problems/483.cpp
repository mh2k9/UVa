#include<stdio.h>
#include<string.h>

int main(void)
{
char p[90000], temp; int i,k=0;
int j;

while(gets(p)!=NULL)
{
i=0;
k=0;


while(p[k]!='\0')
{
if(p[k]==' '||k==(int)strlen(p)-1)
{
if(p[k]==' ')
{
j=k-1;
}
else
{
j=k;
}



while(i<=j)
{
temp=p[i];
p[i]=p[j];
p[j]=temp;
i++;
j--;
}
i=k+1;
}

k++;
}
puts(p);
}


return 0;

}
