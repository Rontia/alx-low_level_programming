#include "main.h"

/**
* _puts - this is a function that puts
*@str: a parameter to _puts function
*Return: String
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
