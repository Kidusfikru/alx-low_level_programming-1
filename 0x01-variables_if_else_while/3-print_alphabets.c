#include<stdio.h>

/**
  * main - print alphabet in lowercase and then in uppercase
  * 
  * Return: zero
  */

int main (void)
{
	char ch1 = 'a';
	char ch2 = 'A';
	for ( ch1= 'a'; ch1 <= 'z'; ch1++)
	{
		putchar(ch1);
	} 
	for ( ch2= 'A'; ch2 <= 'Z'; ch2++)
	{
		putchar(ch2);
	} 
	put char('\n');
  return (0);
} 
