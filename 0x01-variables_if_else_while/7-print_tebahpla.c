#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
/*This program prints the alphabet in reverse order*/

int main(void)
{
int r;

for (r = 'z'; r >= 'a'; r--)
{
putchar (r);
}
putchar ('\n');
return (0);
}
