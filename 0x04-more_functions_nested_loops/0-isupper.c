#include <stdio.h>
#include "main.h"

/**
*_isupper - checks if a character is uppercase or not
*@c: checks input of function
*Return: returns 1 if c is uppercase
* otherwise always 0 (success)
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
return (0);
}
