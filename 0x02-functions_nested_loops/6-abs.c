#include "main.h"

/**
 *_abs - function that computes the absolute value of an integer
 *@num: integer input
 *Return: absolute value of integer (positive integer only)
 */

int _abs(int num)
{
if (num < 0)
{
num = num * -1;
}
return (num);
}
