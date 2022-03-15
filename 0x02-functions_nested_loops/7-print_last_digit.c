#include "main.h"

/**
  * print_last_digit - print the last digit of a number.
  *
  * @n: to be computed
  * Return: last digit.
  */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		l *= -1;
	}
	_putchar('0' + l);
	return (l);
}
