#include <stdio.h>
#include "main.h"

/**
 *description: prints the number 1 - 100 w/
 *multiples of 5 with "Buzz", and multiples of both 3 and 5 with "FizzBuzz".
 *@return 0 indicating successful execution.
 *return: always 0
 */
int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\n");
		}
			else if (i % 5 == 0)
			{
				printf("Buzz\n");
			}
		else
		{
			printf("%d\n", i);
		}
	}
	return (0);
}
