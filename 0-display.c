#include "holberton.h"

/**
 * display_complex_number - function that displays the complex numbers
 * @c: complex number
 */

void display_complex_number(complex c)
{
	printf("%g", c.re);

	if (c.im > 0)
		printf(" + ");
	if (c.im < 0)
	{
		printf(" - ");
		c.im = -c.im;
	}

	if (c.im != 0 && c.im != 1 && c.im != -1)
		printf("%gi", c.im);
	if (c.im == 1 || c.im == -1)
		printf("i");
	printf("\n");
}
