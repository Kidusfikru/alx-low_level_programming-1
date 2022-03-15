#include <stdio.h>

/**
  * main - Prints the add of the even-valued fibonacci numbers.
  *
  * Return: Always 0.
  */
int main(void)
{
	long int num1, num2, a, b;

	num1 = 1;
	num2 = 2;
	a = b = 0;
	while (a <= 4000000)
	{
		a = num1 + num2;
		num1 = num2;
		num2 = a;
		if ((num1 % 2) == 0)
		{
			b += num1;
		}
	}
	printf("%ld\n", b);
	return (0);
}
