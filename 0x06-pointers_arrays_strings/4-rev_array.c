#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: a is the array
 * @n: Where n is the number of elements if the array
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	n = n - 1;
	while (i <= n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
}

