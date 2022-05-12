#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: Pointer to struct
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if ((*d).name != 0)
			printf("Name is: %s\n", (*d).name);
		else
			printf("Name is: (nil)\n");
		printf("Age is: %f\n", (*d).age);
		if ((*d).owner != 0)
			printf("Owner is: %s\n", (*d).owner);
		else
			printf("Owner is: (nil)\n");
	}
}
