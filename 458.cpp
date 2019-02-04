#define max 2000000

#include <stdio.h>

main()
{

int i;
char pwd[max];

while ( fgets(pwd, max, stdin) )
{
for ( i = 0 ; i < max ; i++ )
{
if ( pwd[i] == '\n')
break;

pwd[i] = pwd[i] - 7;
printf("%c", pwd[i]);
}

printf("\n");
}

}
