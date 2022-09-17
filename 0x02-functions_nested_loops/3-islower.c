#include "msin.h"
/**
 * _islower - compares it an input is lower case character or not
 * @c: Input character to be compared recieved as int
 *
 * Return: 1 of the character c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	return (0);
}
