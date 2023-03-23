#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int t = 0;
	char g;

	while (t++ <= 9)
	{
		for (g = 'a'; g <= 'z'; g++)
			_putchar(g);
		_putchar('\n');
	}
}
