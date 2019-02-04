#include<stdio.h>

int main()
{
    long s,d,c,day;
    while(scanf("%ld %ld",&s,&d)==2)
    {
        c=0;
        for(day=s;;day++)
        {
            c+=day;
            if(c>=d)
            {
                printf("%ld\n",day);
                break;
            }
        }
    }
    return 0;
}
