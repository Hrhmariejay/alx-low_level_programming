#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to string to print in reverse
 *
 * This function takes a pointer to a null-terminated string and prints
 * the string in reverse order, followed by a new line character.
 *
 * Return: none
 */
void print_rev(char *s)
{
int c = 0;
while (s[c] != '\0')
{
c++;
}
for (c -= 1; c >= 0; c--)
{
_putchar(s[c]);
}
_putchar('\n');
}
