#include <stdio.h>
/**
 * _puts - Prints a string followed by a new line.
 * @str: Input string
 * Return: No return
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
