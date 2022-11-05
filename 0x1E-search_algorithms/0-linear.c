#include "search_algos.h"
#include <stdio.h>

int linear_search(int *array, size_t size, int value)
{
	int index;

	if (!array)
		return (-1);
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}

int main(void)
{
	int array[] = {98, 0, 234, 1, 987, 2, 345, -1};
	size_t size;
	int value;
	int index;

	size = sizeof(array) / sizeof(array[0]);
	value = 345;
	index = linear_search(array, size, value);
	if (index != -1)
		printf("Value found between indexes [%d] and [%d]\n",
				index, index + 1);
	else
		printf("Value not found\n");
	return (0);
}
