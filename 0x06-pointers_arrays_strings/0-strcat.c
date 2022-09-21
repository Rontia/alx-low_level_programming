#include "main.h"

/**
 * _strcat - concatenate the string pointed to by @src, including the terminat
 * null byte, to the end of the string pointed to by @dest
 * @dest: pointer to the string to be concatenated upon.
 * @src: the source string to be appended to @dest.
 *
 * Return: returns concatenatedstring @dest.
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
