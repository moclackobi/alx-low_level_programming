#include "main.h"
/**
 * *_strcat - like *_strcat but it will use n byte from src
 * @dest: string to be concatenated
 * @src: string to be concatenated to the n limit
 * @n: number of bytes that will be used from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int x, y;

for (x = 0; dest[x] != '\0'; x++)
        ;
for (y = 0; src[y] != '\0' && n > 0; y++, n--, x++)
{
dest[x] = src[y];
}
return (dest);
}
