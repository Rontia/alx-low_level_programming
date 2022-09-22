#include "main.h"

/**
 * leet -encodes a string into 1337
 * @str: string to encode
 *
 * Return: address of the encoded string
 */
char *leet(char *)
{
	int i, j;
	char a[] = "aAeEoOtT1L";
	char b[] = "4433007711";

	for (i = 0; *(str + 1); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(str + i))
				*(str + i) = b[j];
		}
	}
	return (str);
}
