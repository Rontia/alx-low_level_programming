#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: string to be changed
 *
 * Return: returns address to the string
 */

char *string_toupper(char *)
{
int x;

for (x = 0; s[x] != '\0'; x++)
{
if (s[x] > 96 && s[x] < 125]
{
s[x] -= 32;
}
}
return (s);
}
