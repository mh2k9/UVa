#include<stdio.h>
int fun(long int i);
int val;
main()
{
    while(1){
    scanf("%ld",&val);
    if(val==0) break;
    else fun(val);
    }

   return 0;
}
int fun(long int n)
{
    long int remainder,sum=0;
    while( n != 0 )
   {
      remainder = n % 10;
      sum = sum + remainder;
      n = n / 10;
   }
    if(sum<10)
    printf("%ld\n",sum);
    else fun(sum);
    sum=0;

}
