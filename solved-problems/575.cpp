#include<stdio.h>
#include<math.h>
#include<string.h>
int main(void)
{
        char n[100];
        long  int s=0,p,q;
        int i=1,l;
        while(1)
        {
          scanf("%s",&n);
          l=strlen(n);
          if(l==1 && ((int)n[0]-48)==0) break;
          while(l!=0)
          {
              p=((int)n[l-1])-48;
              q=p*((pow(2,i))-1);
              s+=q;
              i++;l--;
          }
          printf("%ld\n",s);
          s=0,q=0,i=1;
        }

}
