#include "main.h"
#include <stdlib.h>
/**
  * _strdup - returns a pointer to a newly allocated space in memory.
  * @str: string.
  *
  * Return: pointer of an array of chars
  */
char *_strdup(char *str)
{
	char *ch;
	unsigned int i, j;
	i = sizeof(*str);

	if (str == NULL)
		return (NULL);

	ch = (char *)malloc(sizeof(char) * i);

	if (ch == NULL)
		return (NULL);

	for (j = 0; j <=i ; j++)
		ch[j] = str[j];

	return (ch);
}
