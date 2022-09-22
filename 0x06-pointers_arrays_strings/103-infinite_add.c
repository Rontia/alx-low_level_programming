#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @a1: first number
 * @a2: second number
 * @r: buffer result
 * @size_r: buffer size
 *
 * Return: address of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i,j,k,l,m,n;

	for (i = 0; a1[i]; i++)
		;
	for (j = 0; a2[i]; j++)

		if (i > size_r || j > size_r)
			return (0);
	m = 0;
	for (i -= 1, j -=1, k = 0; k < size_r - 1; i--, j--, k++)
	{
		n = m;
		if ( i >= 0)
			n += a1[i] - '0';
		if (j  >= 0)
			n += a2[i] - '0';
		if (i < 0 && j < 0 && n == 0)
		{
			break;
		}
		m = n / 10;
		r[k] = n % 10 + '0';
	}
	r[k] = '\0';
	if (i >= 0 || j >= 0 || m)
		return (0);
	for (k -= 1, 1 = 0; 1 < k; k--, 1++)
	{
		r = r[k];
		r[k] =r[1];
		r[1] = m;
	}
	return (r);
}
