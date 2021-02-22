#include "holberton.h"
/**
 * print_chessboard - prints the chessboard
 * @a: array
 */
void print_chessboard(char (*a)[8])
{
	unsigned int idx_one, idx_two;

	for (idx_one = 0; idx_one < 8; idx_one++)
	{
		for (idx_two = 0; idx_two < 8; idx_two++)
		{
			if (idx_two < 7)
			{
				_putchar(a[idx_one][idx_two]);
			}
			if (idx_two == 7)
			{
				_putchar(a[idx_one][idx_two]);
				_putchar('\n');
			}
		}
	}
}
