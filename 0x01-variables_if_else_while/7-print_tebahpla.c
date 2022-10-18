#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main-program entry point.
*Return:0
*/
int main(void)
{
char i;
for (i = 'Z'; i >= 'a'; i--)
{
putchar(i);
putchar('\n');
}
return (0);
}
