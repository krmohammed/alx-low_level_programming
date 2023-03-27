#include "main.h"

/**
 * swap_int - takes two pointers that points to an integer, swaps their values
 * @a: first pointer
 * @b: second pointer
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
