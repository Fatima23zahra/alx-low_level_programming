#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the multiplication of 2 args numbers
  * @argc: int
  * @argv: list
  *
  * Return: Always 0
  */
int main(int argc, char const *argv[])
{
	int n1 = 0, n2 = 0;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

