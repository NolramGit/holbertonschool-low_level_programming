#include "main.h"

/**
 * print_triangle - Entry function.
 * Description : Function that prints a traingle.
 * @size: represent the size of the triangle.
 */

void print_triangle(int size)
{
	int space = size - 1;
	int trg_width;
	int trg_height;

	if (size > 0)
	{
		for (trg_height = 1; trg_height <= size; trg_height++)
		{
			for (trg_width = 1; trg_width <= size; trg_width++)
			{
				if (trg_width <= space)
				{
					_putchar(32);
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar(10);
			space--;
		}
	}
	else
	{
		_putchar(10);
	}
}

