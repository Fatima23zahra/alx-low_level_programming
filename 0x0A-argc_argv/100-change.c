#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Prints the min number of coins.
  * to make change for an amount of money.
  * @argv: argument vector.
  * @argv: pointer to an arry of command line arguments.
  * Return: Always 0, non-zero-fail.
  */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, leastcents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};
		for (i = 0; i < 5; i++)
		{
			if (money >= cents[i])
			{
				leastcents += money / cents[i];
				money = money % cents[i];
				if (money % cents[i] == 0)
				{
					
	break;
				}
			}
			
			printf("%d\n", leastcents);
		}
		{
			printf("Error\n");
		}
			return (1);
		}
		
return (0);
}
