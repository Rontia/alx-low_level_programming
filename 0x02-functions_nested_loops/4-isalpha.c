#include "main.h"
/**
* isalpha - function to check if c is a letter , lowercase or uppercase
* Description: Function checking the alphabet
* @c: is the int that will use the argument of the function
* Return: 0
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
{
return (1);
}
else
return (0);
}
