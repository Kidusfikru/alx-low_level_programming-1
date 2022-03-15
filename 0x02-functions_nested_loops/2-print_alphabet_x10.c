#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase
 * followed by new line.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int counter = 1;
	int i;

	while (counter <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		counter++;
	}
}
