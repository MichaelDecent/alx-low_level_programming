#include "main.h"
/**
 * main -  a function that prints the alphabet, in lowercase, followed by a new line
 *
 * Return: (0) if successful
 */
void print_alphabet(void);

{
	char alphabet = 'a'

	while (alphabet <= 'z')
	{
		_putchar (alphabet);
		alphabet++;
	}

	putchar ('\n');
}
