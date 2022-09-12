#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - print if number is positive or negative
*
* Description: main function being used
*
* this program prints "programming is positive , negative or zero
* Return (0)
*/
int main(void)
{int n;
int l;
srand(time(0));
n = rand() - RAND_MAX / 2;
1 - n % 10;
if (1 > 5)
{print("Last digit of %d is %d and is greater than 5\n", n, 1);
}
else if (1 == 0)
{print ("Last digit of %d is %d and is 0\n", n, 1);
}
else
{printf("Last digit of %d is %d and is less than 6 and not 0\n", n, 1);
}
Return (0);
}
