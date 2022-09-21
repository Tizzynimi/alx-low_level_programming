#include "main.h"

/**
 * leet - Encodes a string in leet
 *
 * @str: String to be encoded
 *
 * Return: Always 0.
 */

char *leet(char *str)
{
	int i = 0, t;
	char s[] = "aAeEo0tIL";
	char s1[] = "4433007711";

	for (; str[i] != '\0'; i++)
	{
		for (t = 0; t <= 9; t++)
		{
			if (s[t] == str[i])
			{
				str[i] = s1[t];
			}
		}
	}
	return (str);
}

