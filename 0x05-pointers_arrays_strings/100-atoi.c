/* 100-atoi.c */
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int digit;

    while (*s)
    {
        if (*s == '-')
            sign *= -1;

        if (*s >= '0' && *s <= '9')
        {
            digit = *s - '0';

            if (result == 0)
                result = digit;
            else
                result = result * 10 + digit;
        }
        else if (result != 0)
        {
            break;
        }

        s++;
    }

    return result * sign;
}
