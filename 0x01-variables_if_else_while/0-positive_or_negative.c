#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a random number and states whether
 *	  it is positive, nagative or zero.
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 1)
printf("id is positive\n", n);
else if(n < 0)
printf("id is negative\n", n);
else 

printf("id is zero\n", n);

return (0);
}
