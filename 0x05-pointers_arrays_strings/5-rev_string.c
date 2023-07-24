#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
if (s == NULL)
return;
/* Calculate the length of the string */
int length = 0;
while (s[length] != '\0')
length++;
/* Swap characters from the start and end of the string */
int start = 0;
int end = length - 1;
char temp;
while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}
