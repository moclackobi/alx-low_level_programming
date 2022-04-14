#include "main.h"

/**
 * _inlower - Checks if a character is lowercase.
 * @c: the character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _inlower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
