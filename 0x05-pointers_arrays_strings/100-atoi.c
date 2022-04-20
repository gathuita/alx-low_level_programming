#include <stdio.h>
/**
 * _atoi - converts string to integer
 *
 * @s: string to convert from
 *
 * Return: integer from conversion
 */
int _atoi(char *s)
{
	int assign = 1;
	unsigned int sum = 0;
	char performing = 0;

	while (*s)
	{
		if (*s == '-')
			assign = assign * -1;
		if (*s >= '0' && *s <= '9')
		{
			performing = 1;
			sum = sum * 10 + *s - '0';
		}
		else if (*s < '0' || *s > '9')
		{
			if (performing)
				break;
		}
		s++;
	}
	if (assign < 0)
		sum = (-(sum));
	return (sum);
}
