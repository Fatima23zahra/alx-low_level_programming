#include <stdio.h>

/**
  * main - Prints all the args content
  * @argc: int
  * @argv: list
  *
  * Return: Always 0
  */
int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

