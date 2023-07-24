/* 100-atoi.c */

#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;
/* Check for a sign (+ or -) */
while (s[i] == '-' || s[i] == '+')
{
if (s[i] == '-')
sign *= -1;
i++;
}
/* Process the digits of the number */
while (s[i] >= '0' && s[i] <= '9')
{
/* Handle overflow */
if (result > INT_MAX / 10 || (result == 10 && s[i] - '0' > INT_MAX % 10))
{
/* Return positive numbers, INT_MIN for negative numbers */
return (sign == 1 ? INT_MAX : INT_MIN);
}
result = result * 10 + (s[i] - '0');
i++;
}
return (result *sign);
}
