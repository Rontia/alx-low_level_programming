#include "main.h"

/**
* _strlen - function to get the length of a string
* @s: string pointer passed to this function
* Return: returns length of string
*/
int _strlen(char *s)
{
int len;

while (*s != '\0')
{
len = len + 1;
*s = *s + 1;
}
return (len);
}
