#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, boolean, boolean2;
	long int num1, num2, num3, num4, a, b;

	num1 = 1;
	num2 = 2;
	boolean =  boolean2 = 1;
	printf("%ld, %ld", num1, num2);
	for (i = 0; i < 96; i++)
	{
		if (boolean)
		{
			a = num1 + num2;
			printf(", %ld", a);
			num1 = num2;
			num2 = a;
		}
		else
		{
			if (boolean2)
			{
				num3 = num1 % 1000000000;
				num4 = num2 % 1000000000;
				num1 = num1 / 1000000000;
				num2 = num2 / 1000000000;
				boolean2 = 0;
			}
			b = (num3 + num4);
			a = num1 + num2 + (b / 1000000000);
			printf(", %ld", a);
			printf("%ld", b % 1000000000);
			num1 = num2;
			num3 = num4;
			num2 = a;
			num4 = (b % 1000000000);
		}
		if (((num1 + num2) < 0) && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}
