#include "main.h"
/**
 * *_strcat - like *_strcat but it will use n byte from src
 * @dest: string to be concatenated
 * @src: string to be concatenated to the n limit
 * @n: number of byte that will be used from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int x, y, n;
x = 0;
	
while (dest[x])
x++;
for (y = 0; y < n && src[y] != '\0'; y++)
dest[x + y] = src[y];
dest[x + y] = '\0';

return (dest);
}
