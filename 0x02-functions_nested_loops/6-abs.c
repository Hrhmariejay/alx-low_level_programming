#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @a: The number to be computed
 * Return: Absolute value of number or zero
 */
int _abs(int a)
{
int k = a;
int absvalue;
if (k < 0)
{
k = k * (-1);
}
absvalue = k;
return (absvalue);
}
