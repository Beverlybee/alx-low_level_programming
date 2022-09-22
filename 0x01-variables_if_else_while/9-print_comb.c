#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always (0)
 */

int main(void)
{
int co;

for (co = '0'; co <= '9'; co++)
{
putchar (co);
if (co != '9')
{
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
