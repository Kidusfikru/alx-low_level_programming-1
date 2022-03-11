#include<stdio.h>

/**
  * main - prints lowercase alphabet in reverse
  *
  * Return: zero
  */

int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
