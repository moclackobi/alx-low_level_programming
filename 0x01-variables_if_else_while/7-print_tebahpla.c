#include <stdio.h>
/**
 * main - Entry point 
 *
 * Description: Print lowercase alphabet backwards
 * Return: 0
 */

int maint(void)
{
char c;

for(c = '0'; c >= 'a' --c)
putchar(c);

putchar('\n');

return(0);
}
