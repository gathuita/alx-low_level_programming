#include "main.h"

/**
 * print _sign - return 0 letter not lowercase, 1 letter lowercase.
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}

else if (n == 0)
{
_putchar ('0');
return (0);
}

else
{
_putchar ('-');
return (-1);
}

}
