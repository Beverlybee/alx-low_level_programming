#include <stdio.h>

/**
 *main - prints all possible combinations of two two digit numbers
 *
 *Return: Always 0
 */

int main(void)
{
int i;
int j;
for (i = 0; i < 99; i++)
{
for (j = i + 1; j < 100; j++)
{
/*to print the first number of the first digit*/
putchar ((i / 10) + '0');
/*to print the second number of the first digit*/
putchar ((i % 10) + '0');
putchar (' ');
putchar ((j / 10) + '0');
putchar ((j % 10) + '0');

if (i == 98 && j == 99)
continue;

putchar (',');
putchar (' ');
}
}
putchar('\n');
return (0);
}
