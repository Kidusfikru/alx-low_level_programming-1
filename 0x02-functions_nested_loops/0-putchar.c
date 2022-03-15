#include "printstring.h"

/**
  * main - printing a string
  * Return: 0
  */
int main(void)
{
	char *printstring = "_putchar";

	while (*printstring)
	{
		_putchar(*printstring);
		printstring++;
	}
	_putchar('\n');
	return (0);
}
