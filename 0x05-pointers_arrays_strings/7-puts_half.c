#include "main.h"

/**
 * puts_half - length of string
 * @str: char
 * Retur: int
 */
void puts_half(char *str)
{
int i, j;

i = 0;
while (str[i])
i++;
j = 1 / 2;
if ( i % 2)
j += 1;
while (j < i)
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}
