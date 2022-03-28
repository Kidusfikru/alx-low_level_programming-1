#include "holberton.h"
/**
  * _strstr - finds the first occurrence of the substring.
  * needle in the string haystack.
  * @haystack: entire string.
  * @needle: substring.
  * Return: pointer to the beginning of located substring or
  * NULL if the substring is not found.
  */
char *_strstr(char *haystack, char *needle)
{
	char *haystack2;
	char *needle2;

	while (*haystack != '\0')
	{
		haystack2 = haystack;
		needle2 = needle;

		while (*haystack != '\0' && *needle2 != '\0' && *haystack == *needle2)
		{
			haystack++;
			needle2++;
		}
		if (!*needle2)
			return (haystack2);
		haystack = haystack2 + 1;
	}
	return (0);
}
