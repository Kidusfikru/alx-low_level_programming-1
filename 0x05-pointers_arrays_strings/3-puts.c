#include "main.h"

/**
 * _puts - prints a string.
 * @str: input string.
 * Returns: no return.
 */
void _puts(char *str)
{
	int i;

	for (i = 0;;i++)
	{
		putchar (str[i]);
		if (str[i] == '\0')
		{
			putchar('\n');
			break;
		}
	}
}
