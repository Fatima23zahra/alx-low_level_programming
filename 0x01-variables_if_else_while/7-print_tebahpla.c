#include <stdio.h>
/**
  *main - Entry point
  *Return: Always o (success)
  */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
