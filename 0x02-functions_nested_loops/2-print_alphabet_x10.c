#include "main.h"

/**
 *  print_alphabet_x10 -  a function that prints 10 times
 *  the alphabet, in lowercase
 *
 *  Return: (0) if successful
 */
void print_alphabet_x10(void)
{
	char line = 1;

	while (line <= 10)
	{
		char alphabet = 'a';

		while(alphabet <= 'z')
		{
			_putchar (alphabet);
			alphabet++;
		}
		_putchar ('\n');
		line++;
	}
}
