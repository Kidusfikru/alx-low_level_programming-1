#include<stdio.h>

/**
  * main - print all single digit numbers of base 10 starting from 0
  * 
  * Return: zero
  */

int main (void)
{
	int num = 0;
	for ( num= 0; num <= 9; num++)
	{
		printf("%d", num);
	} 
	printf("\n");
  return (0);
} 
