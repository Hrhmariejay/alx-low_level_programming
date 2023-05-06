#include "main.h"
/**
 * _strncpy - Copies a string with a specified length
 * @dest: The destination string to copy into
 * @src: The source string to copy from
 * @n: The number of characters to be copied
 * Return: A pointer to the destination string
 * Description:
 * This function copies at most n characters from the source string, src,
 * to the destination string, dest. If the length of src is less than n,
 * the remaining characters in dest are filled with null bytes ('\0')
 * to ensure the destination string is properly terminated.
 * It returns a pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
