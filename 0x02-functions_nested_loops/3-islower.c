#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: input parameter
 *
 * Return: 1 if int c is lowercase
 * 0 if not lowercase
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
