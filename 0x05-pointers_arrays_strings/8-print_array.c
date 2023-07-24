#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 * @a: Pointer to the array of integers
 * @n: Number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('0' + a[i]);

if (i < n - 1)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}