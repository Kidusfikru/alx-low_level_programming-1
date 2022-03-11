#include<stdio.h>

/**
  * main - print all single digit numbers of base 10 without char
  *
  * Return: zero
  */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
