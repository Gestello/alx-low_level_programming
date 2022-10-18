#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main-program entry point
*Return:0
*/
int main(void)
{
int i;
char hexvalues[]	=	 "0123456789abcdef";
for (i = 0; i < 16; i++)
{
putchar (hexvalues[i]);
putchar('\n');
}
return (0);
}
