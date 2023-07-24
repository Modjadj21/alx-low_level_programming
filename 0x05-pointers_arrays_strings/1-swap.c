#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
int temp = *a;   /* Temporary variable to hold the value */
*a = *b;         /* Assign the value of the second intege*/
*b = temp;       /* Assign the temporary variable to the second integer */
}
