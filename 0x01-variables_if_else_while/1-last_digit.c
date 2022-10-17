#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main-program entry point. 
*print the last digit of a random generated number
*find out whether it is greater than 5, less than 6 or 0
*return: 0
*/
int main(void)
{
int n;
int udigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
udigit = n % 10;
if (udigit > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, udigit);
}
else if (udigit == 0)
{
printf("last digit of %d is %d and is 0\n", n, udigit); 
}
else if (udigit < 6 && udigit != 0)
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n, udigit);
}
return (0);
}
