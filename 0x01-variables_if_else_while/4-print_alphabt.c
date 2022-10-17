#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main-program entry point.
*Return:O 
*/
int main(void)
{
char i;
for	(i	=	'a'; i	<=	'Z'; i++)
{
if(i	==	'e'	||	i	==	'q')	continue;
putchar(i);
}
putchar('\n');
return (0);
}

