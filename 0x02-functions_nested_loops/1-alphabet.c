#include "main.h"
/**
 * print_alphabet - print letter a-z
 * Description - lowercase letters
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}
