#include "main.h"

/**
 *jack_bauer - prints every minute of the day from 00:00 to 23:59
 *
 *Return: void
 */

void jack_bauer(void)
{
int i;
int j;

for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
/*to print the first digit of the hour*/
_putchar ((i / 10) + '0');
/*to print the second numer of the hour*/
_putchar ((i % 10) + '0');

_putchar (':');

/*to print the first digit of the minute*/
_putchar ((j / 10) + '0');
/*to print the second digit of the minute*/
_putchar ((j % 10) + '0');

_putchar ('\n');
}
}
}
