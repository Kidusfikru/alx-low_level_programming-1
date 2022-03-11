#include<stdio.h>

/**
  * main - print alphabet in lowercase and then in uppercase
  *   
  * Return: zero
  */

int main (void)
{
	char ch1 = 'a';
	for (ch1= 'a'; ch1 <= 'z'; ch1++)
	{
		if ( ch1 == 'e' || ch1 == 'q')
		{
			continue;
		}
		putchar(ch1);
	} 
	putchar('\n');
  return (0);
}
