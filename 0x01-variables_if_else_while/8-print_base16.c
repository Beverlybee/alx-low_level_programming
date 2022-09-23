#include <stdio.h>

/**
 *main - printts all the numbers of base 16 in lowercase
 *
 *Return: Always 0
 */

int main(void)
{
int h;
h = '0';
while (h <= '9')
{
putchar (h);
h++;
}
h = 'a';
while (h <= 'f')
{
putchar (h);
h++;
}
putchar ('\n');
return (0);
}
