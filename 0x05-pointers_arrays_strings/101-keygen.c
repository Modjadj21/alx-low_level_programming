#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * generate_password - Generates a random valid password
 *
 * Return: A pointer to the generated password
 */
char *generate_password(void)
{
static char password[84];
int i, sum, diff;
srand(time(0));
sum = 0;
i = 0;
while (sum < 2772)
{
password[i] = rand() % 78 + 48;
sum += password[i];
i++;
}
diff = sum - 2772;
password[i] = diff;
i++;
password[i] = '\0';
return (password);
}

/**
* main - Entry point for the program
*
* Return: Always 0 (Success)
*/
int main(void)
{
char *password;
password = generate_password();
while (*password)
{
_putchar(*password);
password++;
}
_putchar('\n');
return (0);
}
