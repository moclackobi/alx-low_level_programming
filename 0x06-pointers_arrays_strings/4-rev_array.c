#include "main.h"
/**
 * reverse_array - reverses content of an array of integer
 * @a: array of integer
 * @n: number of element in array
 * Return: Always 0 (success)
 */
void reverse_array(int *a, int n)
{
int x, y;

for (x = 0; x < (n / 2); x++)
{
y = a[x];
a[x] = a[n - x - 1];
a[n - x -1] = y;
}
}
