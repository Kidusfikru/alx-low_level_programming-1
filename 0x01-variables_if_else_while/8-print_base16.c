#include<stdio.h>

/**
  * main - print all the numbers of base 16 in lowercase
  *
  * Return: zero
  */

int main(void)
{
	int num;
	char ch;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
