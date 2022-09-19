#include "main.h"

/**
* swap int -> swapping the given integers
* @a: parameter 1
* @b: parameter 2
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
