#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print lowercase alphabet backwards
 * Return: 0
 */
int main(void)
{
char c;

for (c = '0'; c >= '0'; --c)
putchar(c);

putchar('\n');

return (0);
}
