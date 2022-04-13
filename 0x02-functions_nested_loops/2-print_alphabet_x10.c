#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int alpha;
int count;


count = 0;
while (count < 10)
{
for (alpha = 'a' ; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}

count++;
_putchar('\n');
}


}
