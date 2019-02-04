#include <iostream>
#include <stdio.h>
using namespace std;

int gcd(int a, int b)
{
	if(b == 0)
	{
	        return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}

int main()
{
int G=0,i,j,N;
while(1){
scanf("%d",&N);
if(N==0)break;
for(i=1;i<N;i++)

for(j=i+1;j<=N;j++)

{

    G+=gcd(i,j);

}
printf("%d\n",G);
G=0;
}
}
