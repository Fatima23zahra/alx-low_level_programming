#include "main.h"

/**
* print_most_numbers -prints 01356789
* return:void
*/

void print_most_numbers(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
int x = 5; // declare and initialize x with a value of 5
print_most_numbers(x); // call the function with x as an argument
_putchar(c);
}
_putchar('\n');
}
