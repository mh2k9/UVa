#include<stdio.h>
#include<math.h>
int main()
{
    unsigned int n;
    while(scanf("%u",&n)!=EOF)
    {
        --n;
        printf("%u\n",(n+(unsigned int)log2(n)));
    }
    return 0;
}
