#include "main.h"

/**
* _strlen - function to get the length of a string
* @s: string pointer passed to this function
* Return: returns length of string
*/
int _strlen(char *s)
{
int len;

for (; *s != '\0'; s++)
{
len = len + 1;
}
return (strlen(s));
}
