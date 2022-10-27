#include "main.h"

/**
 * _strcat - conctenates two strings
 * @dest: First string
 * @src: Second string
 * Return: char
*/

char *_strcat(char *dest, char *src)
{
char *s = dest;
while (dest != '\0')
{
dest++;
}
while src (!= '\0')
{
*dest = *src;
dest++;
**src++;
}
*dest = '\0';
return (s);
}
