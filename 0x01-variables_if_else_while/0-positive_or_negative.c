#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - prin if the number is positive, negative or zero
*
* Description: lets use the main function
* this program prints "programming is positve, negative or zero
* Return: 0
*/
int main(void)
{int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/*you code goes there*/
if (n > 0)
{printf("%i is positive\n", n);
}
else if (n == 0)
{printf("%i is zero\n", n);
}
else
{printf("%i is negative\n", n);
}
return (0);
}
